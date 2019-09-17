## This tool is a bash script to help myself build labs w/o typing annoying g++ cmds
function if_age_of_cpp_is_gt_than_obj {
  local cpp=$1
  local obj=$2
  if [ -f "$obj" ];
  then
      dt_cpp="$(date -r "$cpp" "+%s")"
      dt_obj="$(date -r "$obj" "+%s")"
      if [ $dt_cpp -gt $dt_obj ]
      then
        echo 1
      else
        echo 0
      fi
  else
      echo 1
  fi
}

:'
SKIP=false
if [ $# -eq 0 ] # if there were no params passed through the start the command
  then
    echo -ne "Lab: "
    read LAB
    echo -ne "Clear? (y/n): "
    read CLEAR
  else
    LAB=$1
    CLEAR=$2
fi
'

LAB="1"
CLEAR="n"
LAB_BASE=$(echo $LAB| cut -d'.' -f 1)
DIR="LAB $LAB_BASE/lab$LAB"
CPP_NAME=".cpp"
CPP_LOC="$DIR$CPP_NAME"
LAB_OBJ_EXT=".o"
OBJ_LOC="LAB $LAB_BASE/build/Lab$LAB$LAB_OBJ_EXT"
RUN=true
COMPILE=true

echo LAB

## First figure out the files we need to compile
## Generally. The first item is the runner (with int main)
:'
input="LAB $LAB_BASE/Lab$LAB.build"
while IFS= read -r line; do
    echo "Text read from file: $line"
done < "$OBJ_LOC"
'
:'
if [ $COMPILE == true ]
then
  ## Output what is happening
  echo "==============================================================="
  echo -e "::COMPILE::"
  echo "($CPP_LOC) => ($OBJ_LOC)"
  echo "==============================================================="

  ## Building with g++
  {
    compile_status="$(if_age_of_cpp_is_gt_than_obj "$CPP_LOC" "$OBJ_LOC")"

    if [ $compile_status == 0 ]
    then
      echo "Status: Up-to-date."
    elif [ $compile_status == 1 ]
    then
      g++ "$CPP_LOC" -o "$OBJ_LOC" && echo "Status: Success."
    else
      echo "Status: Error."
    fi

  } || {
    echo "Status: Failed."
    CLEAR="n"
    RUN=false
  }
fi

if [ $RUN == true ]
then
  ## Building complete, now time to run.
  if [ "$CLEAR" != "n" ]
  then
    clear
  fi
  echo "==============================================================="
  echo -e "::EXECUTE::"
  echo -e "LAB $LAB\t\t$OBJ_LOC"
  echo "==============================================================="
  ./"$OBJ_LOC"
fi
'
