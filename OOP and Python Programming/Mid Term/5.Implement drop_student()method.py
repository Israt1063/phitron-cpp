"""Add a method drop_student() in the Student class that changes is_enrolled to False 
to indicate the student has dropped out."""

class Student:
    def __init__(self,name,is_enrolled) :
        self.name=name
        self.is_enrolled = is_enrolled

    def enroll_student(self):
        if not self.is_enrolled:
            self.is_enrolled = True
            print(f'{self.name} has been successfully enrolled.')

        else:
            print(f'{self.name} is not currently enrolled')


    def drop_student(self):
        if self.is_enrolled:
            self.is_enrolled = False
            print(f'{self.name} has dropped out.')
        else:
            print(f'{self.name} is not currently enrolled.')
        

s1 = Student('Ira',False)
s1.drop_student()

s2 = Student('Khan',True)
s2.drop_student()
        
