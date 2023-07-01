program vector_add_loop
	implicit none
	integer, dimension(100) :: a, b, c
	integer :: i, n
	n = 5
	print *, 'Enter value of n:'
	read *, n
	do i=1, n
		a(i) = i; b(i) = i; c(i) = 0;
	end do

	do i=1, n
		c(i) = a(i) + b(i)
	end do

	do i=1, n
		print *, "c(i) = ", c(i)
	end do
		
end program vector_add_loop
