program mat_vect_mul
	implicit none
	integer, parameter :: N = 8
	integer :: i, j, k
	integer, dimension(N, N) :: a, b, c

	do i=1,N
		do j=1,N
			a(i, j) = 1
			b(i, j) = 2
			c(i, j) = 0
		end do
	end do

	do i=1,N
		do j=1,N
			do k=1,N
				c(i, j) = c(i, j) + a(i, k) * b(k, j)
			end do
		end do
	end do

	do i=1,N
		do j=1,N
			print *, c(i, j)
		end do
	end do


end program mat_vect_mul