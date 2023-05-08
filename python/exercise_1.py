# -------------------
# Exercise : Questions based on variable, statements , input and print functions and operators 
# ------------------

# 1) Accept two numbers from the user and print 
    # a) addition 
    # b) first number squared 2 
    # c) first number raised to number second number
def addition(first, second):
    return first + second
def first_num_squared(num):
    return num * num
def power(first, second):
    return first ** second
first_num = int(input("Enter first number: "))
second_num = int(input("Enter first number: "))
print("addition : ", addition(first_num, second_num))
print("first number squared 2 : ", first_num_squared(first_num))
print("first number raised to number second number : ", power(first_num, second_num))

# 2) Accept String from user and output upper case of the input string
def to_upper(string):
    return string.upper()
string = input("Enter string: ")
print(to_upper(string))

# 3) Define a variable named "raise_salary_percentage" and get the salary raise 
    # percentage from the user, Now apply the raise to an employee
    # with harcoded data Name= 'gaurav' existing_salary = 900 INR and 
    # print the incremented salary to the console
def increament_salary(existing_salary, raise_salary_percentage):
    return int(existing_salary * (1 + raise_salary_percentage/100))
raise_salary_percentage = int(input("Enter salary raise %: "))
existing_salary = 900
print("Increamented salary is : ", increament_salary(existing_salary, raise_salary_percentage))

# 4) Get the height from the user in cms and display the user height back to console
# in foot/feet and inches
def cm_to_feet_inch(height):
    number = height / 30.48
    feet = int(number)
    inches = (number - feet) * 12
    return feet, inches    
height = float(input("Enter the height in cm : "))
feet, inches = cm_to_feet_inch(height)
print(f"{feet} feet and {inches} inches")



# 5) Get the no of the dollars from the user apply the conversion of 
# 1 dollar = 82 rupees and print the amount to the console in rupees
def dollar_to_rupees(num_of_dollar):
    return num_of_dollar * 82
num_of_dollar = int(input("Enter number of dollars : "))
print("Amount in rupees is : ", dollar_to_rupees(num_of_dollar))

# 6) Take the source, destination, fare in INR, discount_rate percentage from the user and display the 
# string ex: "fare from mumbai to pune is 300 INR with has a discount of 5%"
def cab_fare(source, destination, fare, discount_rate):
    print(f"Fare from {source} to {destination} is {fare} INR which has a discount of {discount_rate}%")    
source = input("Source : ")
destination = input("Destination : ")
fare = int(input("Fare : "))
discount_rate = int(input("Percentage rate : "))
cab_fare(source, destination, fare, discount_rate)