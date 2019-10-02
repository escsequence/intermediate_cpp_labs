## Ez C++ Build File Linker
##
## 1. Create a file Example.bfl
## 2. Run: bfl example
## 3. Builds: example.o
## 4. Run: ./example.o
## 5. ????????
## 6. Profit!

# Function will read and return the files from a build file
function bfl_read_raw {
  files=''
  while IFS= read -r line; do
      $((files+=$line))
  done < "$1"
  echo $files
}

function bfl_gpp_compile {
  g++ $1 -o $2
}

function bfl {
  PROJECT=$1
  PROJECT_BUILD_LOCATION="$PROJECT.o"
  BUILD_FILE_LOCATION="$PROJECT.bfl"
  BUILD_FILES=$(bfl_read_raw "$BUILD_FILE_LOCATION")
  bfl_gpp_compile "$BUILD_FILES" "$PROJECT_BUILD_LOCATION"
}

bfl_read_raw "Lab2.bfl"

# Didn't see anything here...
clear
