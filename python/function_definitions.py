def addition(first, second):
    return first + second
def first_num_squared(num):
    return num * num
def power(first, second):
    return first ** second

def to_upper(string):
    return string.upper()

def increament_salary(existing_salary, raise_salary_percentage):
    return int(existing_salary * (1 + raise_salary_percentage/100))

def cm_to_feet_inch(height):
    number = height / 30.48
    feet = int(number)
    inches = (number - feet) * 12
    return feet, inches

def dollar_to_rupees(num_of_dollar):
    return num_of_dollar * 82

def cab_fare(source, destination, fare, discount_rate):
    print(f"Fare from {source} to {destination} is {fare} INR which has a discount of {int(fare*(discount_rate)/100)}")