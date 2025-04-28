#include <iostream>
using namespace std;
class Student{
    public :
    int id;
    int cls;
    double cgpa;

    //constructor
    Student(int id ,int cls, double cgpa)
    {
        //if class and contructor_parameter name is same then use "this." keyword
      // this->id= id;
       (*this).id=id;
        this->cls= cls;
        this->cgpa =cgpa;
    }

};
Student fun()
{
     Student mahmud(394,1,3.50);
     return mahmud;

}
int main() 
{
   
   Student obj=fun();
    
    cout<<obj.id<<" "<<obj.cls<<" "<<obj.cgpa<<endl;
    

    return 0;
}