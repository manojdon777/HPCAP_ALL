for i in 2 4 6 8 10 12 14 16 18 20 22 24 26
do
	for j in 1 2 3
	do
		mpicc mpi_pi_parallel.c && mpirun -n $i ./a.out > data.txt
	done
done