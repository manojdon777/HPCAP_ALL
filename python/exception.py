# 1) Write a program that creates a dictionary like this 
# {
#     1: "red" , 2: "Blue" , 3: "Orange"
# }
# Now take the key as input from the user and print its corresponding colour 
# (Exception handle the code to terminate gracefully by printing 
# Colour not found if the key doesnot exists )

# 2) Write a program that creates a list of 5 elements of your choice 
# Now take the index that the user want the data of and print the value at that 
# location 
# Exception handle the code to  terminate gracefully by printing 
# Value not found if the index doesnot exists 

# 3) Create program that takes age of the user as input 
# and prints number of days that user has lived for 
# Exception handle the code such that if the user has lived for more than 
# 100001 days then user should get the message
# , you lived for so long , may be you will die soon:)

# 4) Complete the bits and pieces of the following below code 
class negative_number_error(Exception):
    pass

class positive_number_error(Exception):
    pass

class homogenous_list_error(Exception):
    pass

def create_positive_numbered_list(my_int_list):
    l = [1,2,3,4,5,-6,7,8,9]
    for i in l:
        try:
            if i < 0:
                raise negative_number_error
            else:
                my_int_list.append(i)
        except negative_number_error:
            print('Negative number found')

def create_negative_numbered_list(my_int_list):
    l = [1,2,3,4,5,-6,7,8,9]
    for i in l:
        try:
            if i > 0:
                raise positive_number_error
            else:
                my_int_list.append(i)
        except positive_number_error:
            print('Positive number found')

def create_heterogenous_list(my_int_list):
    data_type = None
    first_data_type = None
    list_count = 0 
    while True:
        print('Datatype:')
        print('1. int')
        print('2. float')
        print('3. string')
        print('4. boolean')
        print('5. Exit')
        choice = int(input('Enter choice : '))
        if choice == 1:
            data_type = type(1)
        elif choice == 2:
            data_type = type(1.1)
        elif choice == 3:
            data_type = type('')
        elif choice == 4:
            data_type = type(True)
        else:
            break
        
        num = data_type(input('Enter data: '))
        if len(my_int_list) == 0:
            my_int_list.append(num)
            first_data_type = type(my_int_list[0])
        else:
            my_int_list.append(num)
        list_count += 1
    is_homo = True       
    for i in range(1,list_count):
        if first_data_type != type(my_int_list[i]):
            is_homo = False
            break
    try:
        if is_homo:
            raise homogenous_list_error
        else:
            print('List is heterogenous')
    except homogenous_list_error:
        print('List is homogenous')
            
            
        

def find_an_element(my_int_list):
    num = int(input('Enter num to search : '))
    

def my_exception_store(): 
    my_int_list1=[]
    my_int_list2=[]
    my_het_list3=[]

    while(True):
        try:
            print("Welcome to my_exception_store !!!!")
            print("-------------------------------------")
            print("Following operations are supported :")
            print("1) Create a positive numbered list  ")
            print("2) Create a negative numbered list  ")
            print("3) Create a heterogenous list ")
            print("4) Check if the element is present in the list ")
            print("5) Refresh the program to start with blank lists")
            print("6) Exit  ")
            
            choice = int(input("Please enter your choice !!!! "))
            if choice ==1:
                create_positive_numbered_list(my_int_list1)
            elif choice ==2:
                create_negative_numbered_list(my_int_list2)
            elif choice ==3:
                create_heterogenous_list(my_het_list3)
            elif choice ==4:
                print("Lists created are as below \n ----------------------")
                print(f"1 : {my_int_list1}")
                print(f"2 : {my_int_list2}")
                print(f"3 : {my_het_list3}")
                
                while True:
                    check =int(input("Which of the below list you would want to search from "))
                    
                    if  check == 1:
                        find_an_element(my_int_list1)
                        break
                    elif check == 2:
                        find_an_element(my_int_list2)
                        break
                    elif check ==3:
                        find_an_element(my_het_list3)    
                        break
                    else:
                        print("Please choose something from the above")
            elif choice ==5:
                my_int_list1.clear()
                my_int_list2.clear()
                my_het_list3.clear()
                print("Store restarted !!!! ")
            elif choice ==6:
                break
            else:
                print("Please choose something from the above")
        except negative_number_error:     
            print("We received a negative number in the list and I handled negative_number_error exception")
            my_int_list1.clear()
        except positive_number_error:     
            print("We received a positive number in the list and I handled positive_number_error exception")
            my_int_list2.clear()
        except homogenous_list_error:    
            print("We received a Homogenous list and I handled homogenous_list_error exception")
            my_het_list3.clear()
            
my_exception_store()   