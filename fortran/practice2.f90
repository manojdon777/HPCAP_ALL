program practice2
	implicit none
	real, dimension(100) :: a, b, c
	real :: alpha
	integer :: i, n
	n = 20
	i = 0

	alpha = 0.001

	do i=0, n
		a(i) = i
		b(i) = i
		c(i) = 0
	end do

	do i=0, n
		c(i) = a(i) + alpha*b(i)
	end do

	do i=0, n
		print *, "c(i) = ", c(i)
	end do

end program practice2
