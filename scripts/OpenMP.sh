FILE=$1
OUT_FILE=${FILE%.*}
gcc $FILE -o $OUT_FILE -fopenmp && ./$OUT_FILE
