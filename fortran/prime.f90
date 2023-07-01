program prime
	implicit none
	integer :: i, j, n
	integer :: count, flag
	count = 1
	n = 10000
	do i=1, n-1
		if (i>2) then
			flag = 0
			do j=2, i-1
				if(mod(i, j) == 0) then
				flag = 1
					exit
				end if
			end do
			if(flag == 0) then
				count = count + 1
			end if
		end if
	end do
	print *,"Number of primes: ", count
end program prime