"""Implement error handling for:
- Invalid student ID when enrolling or dropping a student.
- Trying to enroll a student who is already enrolled.
- Trying to drop a student who is not enrolled.
"""

class Student:
    student_list = []
    
    def __init__(self, name, student_id, department, enrollment_status):
        self.student_id = student_id
        self.name = name
        self.department = department
        self.enrollment_status = enrollment_status
        self.is_enrolled = enrollment_status  
        self.add_student()

    def add_student(self):
        Student.student_list.append(self)

    def view_student_info(self):
        print(f'Name: {self.name}, Student ID: {self.student_id}, Department: {self.department}, Enrollment_Status: {self.is_enrolled}')  # Use is_enrolled here

    def enroll_student(self):
        if not self.is_enrolled:
            self.is_enrolled = True
            print(f'{self.name} has been successfully enrolled.')
        else:
            print(f'{self.name} is already enrolled.')
    
    def drop_student(self):
        if self.is_enrolled:
            self.is_enrolled = False
            print(f'{self.name} has dropped out.')
        else:
            print(f'{self.name} is not currently enrolled.')

    @staticmethod
    def display_menu():
        print("Menu:")
        print("1. View All Students")
        print("2. Enroll Student")
        print("3. Drop Student")
        print("4. Exit")

student1 = Student('ira',394,'swe',True)
student2 = Student('Khan,242,'swe',True)
student3 = Student('Tithi',332,'swe',True)

