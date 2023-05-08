class Employee:
    #class variable
    department_name = 'HPCAP'
    
    #initialiser
    def __init__(self, emp_id, emp_salary, mgr_id):
        self.emp_id = emp_id
        self.emp_salary = emp_salary
        self.mgr_id = mgr_id
  
    # instance methods
    def get_emp_salary(self):
        return self.set_emp_salary
    
    def set_emp_salary(self, rcv_salary):
        self.rcv_salary = 20000
        
    def display(self):
        print(f'Id : {self.emp_id}, Salary : {self.emp_salary}, Manager_ID : {self.mgr_id}')

    #class methods
    @classmethod
    def get_department_name(cls):
        return cls.department_name
    
    #static methods
    @staticmethod
    def field_expertise():
        print('We are in static method & method name is field_expertise()')
    
emp1 = Employee(100,1000,1)
emp1.display()
    