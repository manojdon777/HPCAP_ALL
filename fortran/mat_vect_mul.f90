program mat_vect_mul
	implicit none
	integer :: i, j
	integer, parameter :: N = 8
	integer, dimension(N, N) :: a
	integer, dimension(N) :: b, c

	do i=1,N
		do j=1,N
			a(i,j) = 1			
		end do		
	end do

	do i=1,N
		b(i) = 2
		c(i) = 0		
	end do

	do i=1,N
		do j=1,N
			c(i) = c(i) + a(i,j) * b(i)			
		end do		
	end do

	do i=1,N
		print *, c(i)		
	end do

end program mat_vect_mul