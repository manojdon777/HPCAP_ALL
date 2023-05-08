def set_union(setA,setB):
    set_display(setA)
    set_display(setB)
    print("Union",setA.union(setB))

def set_intersection(setA,setB):
    set_display(setA)
    set_display(setB)
    print("Intersection",setA.intersection(setB))  

def set_minus(setA,setB):
    set_display(setA)
    set_display(setB)
    print("Difference",setA.difference(setB))    

def is_member_of_set(rcv_set):
    element= input("Please enter element to search for ") 
    print(f"Element{element} is present(True/False): { element in rcv_set }")  
    set_display(rcv_set)

def set_display(rcv_set):
    print(rcv_set)

def set_add_element(rcv_set):
	rcv_set.add(input("Please enter element to add"))   
	set_display(rcv_set)
	
def set_add_elements(rcv_set):
    rcv_set.update(set(input("Please enter comma seperated elements for the set ").split(",")))   
    set_display(rcv_set)
	
def set_remove_element(rcv_set):
    rcv_set.discard(input("Please enter element to remove"))
    set_display(rcv_set)            


def my_set_store():
    print("\n Welcome to Our Set Store !!! ")
    print("Please enter a list Comma seperated dictionary elements that you would want to perform Operation Upon")
	
    setA= set()
    setB= set()

    for set_elem in input("Please enter comma seperated elements for the set A").split(","):
        setA.add(set_elem.strip())   

    for set_elem in input("Please enter comma seperated elements for the set B").split(","):
        setB.add(set_elem.strip())   


    while(True):
        print("\n*************** Menu **********************")
        print("Operations supported by our program are :")
        print("	1: Union")
        print("	2: Intersection ")
        print("	3: A-B")
        print("	4: B-A")
        print("	5: Take a element from user and Display if that element is a member of set B ")
        print("	6: Display number of elements in the set A")
        print(" 7: Display number of elements in the set B")
        print("	8: Add an element taken from the user to the set A")
        print("	9: Add multiple elements taken from the user to the set A")
        print("	10: Remove an element taken from the user from set A")
        print(" 11: Exit")

        choice = int(input("Please enter your choice "))

        if choice   ==1:
            set_union(setA,setB) 
        elif choice ==2:
            set_intersection(setA,setB)
        elif choice ==3:
            set_minus(setA,setB)
        elif choice ==4:
            set_minus(setB,setA)
        elif choice ==5:
            is_member_of_set(setB) 
        elif choice ==6:
            set_display(setA)
        elif choice ==7:
            set_display(setB)
        elif choice ==8:
            set_add_element(setA)
        elif choice ==9:
            set_add_elements(setA)
        elif choice ==10:
            set_remove_element(setA)
        elif choice ==11:
            break
        else:
            print("Invalid Input, Please Try Again !!!!  ")  

my_set_store()