from function_definitions import *

first_num = int(input("Enter first number: "))
second_num = int(input("Enter first number: "))
print("addition : ", addition(first_num, second_num))
print("first number squared 2 : ", first_num_squared(first_num))
print("first number raised to number second number : ", power(first_num, second_num))

string = input("Enter string: ")
print(to_upper(string))

raise_salary_percentage = int(input("Enter salary raise %: "))
existing_salary = 900
print("Increamented salary is : ", increament_salary(existing_salary, raise_salary_percentage))

height = float(input("Enter the height in cm : "))
feet, inches = cm_to_feet_inch(height)
print(f"{feet} feet and {inches} inches")

num_of_dollar = int(input("Enter number of dollars : "))
print("Amount in rupees is : ", dollar_to_rupees(num_of_dollar))

source = input("Source : ")
destination = input("Destination : ")
fare = int(input("Fare : "))
discount_rate = int(input("Percentage rate : "))
cab_fare(source, destination, fare, discount_rate)