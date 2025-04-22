"""Add a method enroll_student() in the Student class that checks if the student is not already
enrolled. If not, change is_enrolled to True."""

class Student:
    def __init__(self,name,is_enrolled) :
        self.name = name
        self.is_enrolled = is_enrolled

    def enroll_student(self):
        if not self.is_enrolled:
            self.is_enrolled = True
            print(f"{self.name} has been successfully enrolled.")

        else:
            print(f"{self.name} is already enrolled.")

s1 = Student('ira',False)
s1.enroll_student()
s1.enroll_student()
        