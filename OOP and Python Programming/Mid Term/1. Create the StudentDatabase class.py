"""Define a class named StudentDatabase with one class attribute named student_list. 
Initially, it should be an empty list. Create a class method add_student() to insert an 
object of the Student class into student_list."""

class StudentDatabase:
    student_list = []

    @classmethod
    def add_student(self,Student):
        self.student_list.append(Student)

    @classmethod
    def display_students(self):
        for student in self.student_list:
            print(student)

class Student:
    def __init__(self,name,id) :
        self.name=name
        self.id=id

    def __str__(self) :
        return f"Name:{self.name} and id:{self.id}"
    
s1=Student('Ira',113)
StudentDatabase.add_student(s1)

s2=Student('khan',242)
StudentDatabase.add_student(s2)

StudentDatabase.display_students()
        
        
        