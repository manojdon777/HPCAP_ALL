program pi_fortran
	implicit none
	integer :: i, j, N
	real :: area, pi
	real :: dx, y, x

	N = 100000
	dx = 1.0/N
	x = 0.0;
	area = 0.0

	do i=0, N
		x = i*dx
		y = sqrt(1-x*x)
		area = area + y*dx
	end do

	pi = 4.0*area
	print *, 'PI = ', pi

end program pi_fortran