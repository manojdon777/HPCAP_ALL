program hello
	implicit none
	real :: i = 10.56
	real :: square = 0.0, calc_sqr
	print *, ' i = ', i
	
	call display_sqr(i)
	print *, ' i = ', i
	square = calc_sqr(i)
	print *, ' square = ', square	
end program hello

subroutine display_sqr(i)
	implicit none
	real :: i
	real :: sqr
	sqr = i * i
	i = i + 1
	print *, ' sqr = ', sqr
end subroutine display_sqr

real function calc_sqr(i)
	implicit none
	real, intent(in) :: i
	calc_sqr = i * i
end function calc_sqr

