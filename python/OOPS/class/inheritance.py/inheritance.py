# ----- Inheritance exercise ----
# 1. Define  
#   Person (superclass) that has name , place_of_residence , display_attributes()
#   Sister (subclass of Person)  that has additionally exam_subjects , display_attributes()
#   Uncle (subclass of Person)  that has additionally business , display_attributes()

# main method:
# create a sister class object and display its attributes 
# create a Uncle class object and display its attributes 
class Person:
    #initialiser
    def __init__(self, name, place_of_residence):
        self.name = name
        self.place_of_residence = place_of_residence
        
    #instance method
    def display_attributes(self):
        print(f'Name - {self.name} Display attributes - {self.place_of_residence}')
    
class Sister(Person):
   #initialiser
    def __init__(self, name, place_of_residence, exam_subjects):
        super().__init__(name, place_of_residence)
        self.exam_subjects = exam_subjects
        
    #instance method
    def display_attributes(self):
        print(f'Display attributes - {self.exam_subjects}')

class Uncle(Person):
   #initialiser
    def __init__(self, name, place_of_residence, business):
        super().__init__(name, place_of_residence)
        self.business = business
        
    #instance method
    def display_attributes(self):
        
        print(f'Display attributes - {self.business}')

def main():
    sis = Sister(['phy', 'chem','maths'])
    sis.display_attributes()
    
    unc = Uncle('Construction business')
    unc.display_attributes()

main()