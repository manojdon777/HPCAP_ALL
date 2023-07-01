program practice1
	integer, dimension(100) :: a, aa
	integer :: i, n
	n = 20

	! Initialize the vectors
	do i=1, n
		a(i) = i
	end do

	! Add two vectors
	do i=1, n
		aa(i) = calc_square(a(i));
	end do

	! print the output
	do i=1, n
		print *, "aa(i) = ", aa(i)
	end do

end program practice1

real function calc_square(i)
	implicit none
	integer, intent(in) :: i
	calc_square = i * i
end function calc_square