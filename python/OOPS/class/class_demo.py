class Student:
    # class variables 
    institute_name = 'CDAC'
    
    #class method
    @classmethod
    def change_institute_name(cls,in_new_institute_name):
        cls.institute_name = in_new_institute_name

    @classmethod
    def get_institute_name(cls):
        return cls.institute_name 
    
    # static method
    @staticmethod
    def facilities_provided():
        print('Facilities are Gym,Library etc')    
        
    # initialiser 
    def __init__(self,in_name,in_rollno,in_subject):
        # instance variables 
        self.name = in_name
        self. roll_no = in_rollno
        self.subject_enrolled = in_subject
    
    # instance method     
    def display_details(self):
        print(f'{self.name}-->{self.roll_no}--> {self.subject_enrolled}')
    
    # instance method
    def enroll(self,in_new_subject):
        self.subject_enrolled = in_new_subject
    
    # instance method
    def unenroll(self):
        self.subject_enrolled = None