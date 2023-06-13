n=$2
if [[ -f $n ]]
	then
		echo "File name misssing"
		exit 1
fi
if [[ $n -eq 0 ]]
	then
		echo "-n para missing, setting [n=5]"
		n=5
fi

mpicc $1 && mpirun -n $n ./a.out
