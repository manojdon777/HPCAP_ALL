# -------------------------
# Exercises 
# -------------------------

# Loops and Conditionals 
# ----------------------
# # Solve the following using either while/do while loops
# 1) Take a number from the user and print sum from 1 to that number 
# 2) Take a number from the user and print all prime numbers from 1 to that number 
# pseudo code :
# --------------
# accept input from the user 
# loop from 1 to that number
# 	is_prime(loop_iteration_number) which will return
# 	the true if the loop_iteration_number is a prime number
# 	Based on the return value determine if you need to print the 
# 	loop_iteration_number
	
# def is_prime(input_number):
# loop from 2 to that input_number/2
#     if the input_number is divisible by the current loop counter
# 	    terminate the loop and return false 
# 	return true
def sum(num):
    result = 0
    for i in range(1, num + 1):
        result += i
    return result
def isPrime(num):
    if num == 0 or num == 1:
        return False
    for i in range(2,num//2 + 1):
        if num%i == 0:
            return False
    return True
def printPrimes(num):
    print(f"Prime numbers from 1 to {num} are : ", end = ' ')
    for i in range(1, num + 1):
        if isPrime(i):
            print(i, end = ' ')
# 3) Take a number from the user and print all Odd numbers from 1 to that number
def odd(num):
    print(f"Odd numbers from 1 to {num} are : ", end = ' ')
    for i in range(1, num + 1):
        if i%2 != 0:
            print(i, end = ' ')
# 4) Take a number from the user and print all Even numbers from 1 to that number 
def even(num):
    print(f"Even numbers from 1 to {num} are : ", end = ' ')
    for i in range(1, num + 1):
        if i%2 == 0:
            print(i, end = ' ')
# 5) Take a number from the user and print fibonacci sequence till that number
# 	eg : fibonnaci sequence for 5 is 0,1,1,2,3,5
def fib(num):
    print(f'Fib sequence for {num} is : ',end = ' ')
    if num == 0:
        print(num)
        return
    first = 0
    second = 1
    print(first, second, end = ' ')
    while first + second <= num:
        third = first + second
        print(third, end = ' ')
        first = second
        second = third
num = 10
print(f'Sum from 1 to {num} is :',sum(num))

printPrimes(num)
print()

odd(num)
print()

even(num)
print()

fib(0)
fib(1)
print()
fib(13)
print()
fib(15)
print()

# Test cases :
# 1) input_number = 13 output = 0 1 1 2 3 5 8 13
# 2) input_number = 15 output = 0 1 1 2 3 5 8 13
# 3) input_number = 1 output = 0 1 1 
# 4) input_number = 0 output = 0 



# -----------
# Assignment:
# -----------
# -----------
# Assignment:
# -----------
# https://pynative.com/python-if-else-and-for-loop-exercise-with-solutions/