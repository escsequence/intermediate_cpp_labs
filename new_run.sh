


BUILD_FILE_LOCATION="LAB 1/Lab1.build"



while IFS= read -r line; do
    echo $line
done < "$BUILD_FILE_LOCATION"
