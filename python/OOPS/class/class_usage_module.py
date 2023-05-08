from  class_demo import Student

# creating objects 
gaurav = Student("Gaurav",1,"Python")
pratik = Student("Pratik",2,"Java")

# accessing instance variables and instance methods using . notation 
print(f"Gaurav's subject enrolled right now is {gaurav.subject_enrolled}")
gaurav.unenroll()
print(f"Gaurav's subject enrolled right now is {gaurav.subject_enrolled}")

print(f"Pratik's subject enrolled right now is {pratik.subject_enrolled}")

# accessing class variables and class methods using . notation 
print("Institute for Gaurav is " , Student.institute_name)
print("Institute for Pratik is " , Student.institute_name)
Student.change_institute_name('Sunbeam')
print("Institute for Gaurav is " , Student.institute_name)
print("Institute for Pratik is " , Student.institute_name)


# accessing static method
Student.facilities_provided()
gaurav.facilities_provided()

# accessing class method using object reference 
print('Value of Institute using class reference is ' , Student.get_institute_name())
print('Value of Institute using instance reference is ' , gaurav.get_institute_name())

# creating a instance varaible on the fly 
print('Institute_name for Student class is  ' , Student.institute_name)
print('Institute_name for gaurav object is  ' , gaurav.institute_name)
gaurav.institute_name = "Gaurav's institute value "
print('Institute_name for Student class is  ' , Student.institute_name)
print('Institute_name for gaurav object is  ' , gaurav.institute_name)
print('Institute_name for pratik object is  ' , pratik.institute_name)