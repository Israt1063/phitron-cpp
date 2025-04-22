"""Add a method view_student_info() in the Student class to display the details of 
the student including student_id, name, department, and enrollment status.
"""
class Student:
    def __init__(self, name, student_id, department, enrollment_status):
        self.student_id = student_id
        self.name = name
        self.department = department
        self.enrollment_status = enrollment_status

    def view_student_info(self):
        print(f'Name: {self.name}, Student ID: {self.student_id}, Department: {self.department}, Enrollment_Status: {self.enrollment_status}')

student = Student('mahmub', 394, 'swe', True)
student.view_student_info()