"""In the constructor of the Student class, initialize the attributes. Insert the Student 
object into student_list using the method add_student(). This part will be done manually, 
i.e., no need for a menu option."""

class Student:
    Student_list = []

    def __init__(self,name,student_id) :
        self.name = name
        self.student_id = student_id
        self.add_student()

    def add_student(self):
        Student.Student_list.append(self)

    def __str__(self):
        return f'Name:{self.name},ID:{self.student_id}'
    
student1 = Student('Ira',113)
student2 = Student('Khan',242)


for student in Student.Student_list:
    print(student)
        