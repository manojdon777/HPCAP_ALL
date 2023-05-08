# my string store
def string_display(string_input) :
    print(string_input) 

def display_3_4_5_element(string_input) :
    print(string_input[2:5]) 

def string_retrieve_element(string_input):
    print(string_input[int(input('Enter index: '))]) 

def string_retrieve_elements(string_input) :
    print(string_input[int(input('Enter start index: ')) : int(input('Enter end index: ')) + 1]) 

def find_min_element(string_input) :
    print(min(string_input)) 

def reverse_string(string_input) :
    print(string_input[::-1]) 

def  find_each_character_count(string_input):
    char_dict = {}
    for i in string_input:
        if i in char_dict.keys():
            char_dict[i] += 1
        else:
            char_dict[i] = 1
    print(char_dict)

def  find_character_count_greater_than_2(string_input):
    char_dict = {}
    for i in string_input:
        if i in char_dict.keys():
            char_dict[i] += 1
        else:
            char_dict[i] = 1
    for i in char_dict:
        if char_dict[i] > 1:
            print(i,':' ,char_dict[i])

def  check_palindrome(string_input):
    if string_input == string_input[::-1]:
        print('Palindrome')
    else:
        print('Not palindrome') 
             
def my_string_store():
    print("\n Welcome to Our string Store !!! ")
    string_input = 'Learn from yesterday'.strip().replace(' ','').lower()

    while(True):
        print("\n*************** Menu **********************")
        print("Operations supported by our program are :")
        print("  1:  Display the string")
        print("  2:  Display third, fourth and fifth element from the string")
        print("  3:  Retrieve element at a given subscript")
        print("  4:  Retrieve elements from a given subscript and to a given subscript")
        print("  5:  Find minimum character in the string")
        print("  6:  Reverse the string")
        print("  7:  Output list of tuple( character,count) for each characters of the string")
        print("  8:  Output list of characters of the string that appear more than once")
        print("  9:  Check if the string is a palindrome and return output message accordingly")
        print(" 10:  Exit the Program")
        choice = int(input("Please enter your choice"))
        
        if choice   ==1:
            string_display(string_input) 
        elif choice ==2:
            display_3_4_5_element(string_input) 
        elif choice ==3:
            string_retrieve_element(string_input)
        elif choice ==4:
            string_retrieve_elements(string_input) 
        elif choice ==5:
            find_min_element(string_input) 
        elif choice ==6:
            reverse_string(string_input) 
        elif choice ==7:
             find_each_character_count(string_input)
        elif choice ==8:
             find_character_count_greater_than_2(string_input)
        elif choice ==9:
             check_palindrome(string_input)
        elif choice ==10:
            break
        else:
            print("Invalid Input , Please Try Again !!!!  ")

my_string_store()