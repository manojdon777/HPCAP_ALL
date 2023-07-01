FILE=$1
if [[ -f $2 ]]
	then
		echo "File name misssing"
		exit 1
fi
gfortran $FILE && ./a.out
