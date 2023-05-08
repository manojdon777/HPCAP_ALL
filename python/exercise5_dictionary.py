
# Dictionary Exercise
def dict_display(capitals): 
       print(capitals)
def dict_display_capitals(capitals): 
       print(capitals.values())
     
def dict_add_element(capitals):
    country, capi = input("Enter country n capital in country:capital format ").split(':')
    capitals[country] = capi
        
def dict_add_elements(capitals):
    in_string = 'Albania:Tirana,Algeria:Algiers,Andorra:Andorra la Vella'.split(',')
    for ele in in_string:
        for i in ele:
            k, v = ele.split(':')
            capitals[k] = v         
        
def dict_remove_element(capitals):
    country = input('Enter country to delete ')
    del capitals[country] 

def my_dict_store():
    print("\n Welcome to Our Dict Store !!! ")
    print("Please enter a list Comma seperated dictionary elements that you would want to perform Operation Upon")
	
    capitals= {}
    keys = input("Please enter the countries as keys for ex : India,USA,Srilanka ").split(',')
    for elem in keys :
        capitals[elem] = input(f"Please enter the string value for {elem}: ").strip()
    
    while(True):
        print("\n*************** Menu **********************")
        print("Operations supported by our program are :")
        print("    1: Display number of elements in the capitals collection")
        print("    2: Display number of elements in the capitals collection")
        print('    3: Add an element to the capitals collection like --> Afghanistan: Kabul')
        print('    4: Add multiple elements to the capitals collection like -->  Albania:Tirana,Algeria:Algiers,Andorra:Andorra la Vella')
        print("    5: Remove an element from the collection 	")
        print("    6: Exit the Program ")
        choice = int(input("Please enter your choice "))
        if choice   ==1:
            dict_display(capitals)
        elif choice   ==2:
            dict_display_capitals(capitals) 
        elif choice ==3:
            dict_add_element(capitals)
        elif choice ==4:
            dict_add_elements(capitals)
        elif choice ==5:
            dict_remove_element(capitals) 
        elif choice ==6:
            break
        else:
            print("Invalid Input , Please Try Again !!!!  ")

my_dict_store()