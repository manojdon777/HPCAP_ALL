program hello
	implicit none
	integer :: x = 34
	character (len=1) :: GRADE
	if (x<50) then
		GRADE = 'F';
	else if (x > 50 .and. x < 60) then
		GRADE = 'D';
	else if (x > 60 .and. x < 70) then
		GRADE = 'C';
	else if (x > 70 .and. x < 80) then
		GRADE = 'B';
	else
		GRADE = 'A';
	end if
	print *, 'For marks x = ', x, ' Grade is ', GRADE
end program hello
