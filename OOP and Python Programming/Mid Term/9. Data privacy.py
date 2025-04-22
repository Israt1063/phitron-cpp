"""Make the attributes (such as student_id, name, department, is_enrolled) as protected/private 
as possible using Python’s class mechanisms. This will ensure that these attributes cannot be accessed 
directly outside the class."""

class Student:
    def __init__(self, name, student_id, department, is_enrolled): 
        self._name = name
        self.__student_id = student_id                
        self._department = department   
        self.__is_enrolled = is_enrolled  

    def get_student_id(self):
        return self.__student_id 
    
    def set_student_id(self,student_id):
        self.__student_id = student_id

    def get_is_enrolled(self,is_enrolled):
        self.__is_enrolled = is_enrolled

    def display_student_info(self):
        print(f'Name:{self._name},Student ID:{self.__student_id},Deparment:{self._department},Enrolled:{self.__is_enrolled}')

student = Student('Ira',113,'swe',True)
student.display_student_info()

print(student._name)
print(student.get_student_id())
student.set_student_id(113)
print(student.get_student_id())
