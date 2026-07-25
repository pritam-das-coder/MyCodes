# Implement a class Department and another class Employee. The Department class should contain a list of 
# Employee objects as an attribute. Demonstrate aggregation by adding employees to different 
# departments
class Employee:
    def __init__(self,name,position):
        self.name=name
        self.position=position
    
    def __str__(self):
        return f"{self.name} : {self.position}"

class Department:
    def __init__(self,name):
        self.name=name
        self.employees=[]
    
    def add_employee(self,emp):
        self.employees.append(emp)

    def __str__(self):
        e=""
        for i in self.employees:
            e+=str(i)+" "
        return f"{self.name} \n {e}"
    
def main():
    emp1=Employee('Koushik Dasgupta','HOD')
    emp2=Employee('Sourab Das','Assistant Teacher')
    emp3=Employee('Sudip Adhikari','HOD')
    emp4=Employee('Pritam Das','Assistant Teacher')

    it_department=Department('IT Department')
    cse_department=Department('CSE Department')

    it_department.add_employee(emp3)
    it_department.add_employee(emp4)
    cse_department.add_employee(emp1)
    cse_department.add_employee(emp2)

    print(it_department)
    print(cse_department)

if __name__=='__main__':
    main()