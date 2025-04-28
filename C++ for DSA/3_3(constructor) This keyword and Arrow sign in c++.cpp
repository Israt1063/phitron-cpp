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
int main() 
{
   
    Student mahmud(394,1,3.50);
    Student nabi(2323,4,4.23);
    cout<<mahmud.id<<" "<<mahmud.cls<<" "<<mahmud.cgpa<<endl;
    cout<<nabi.id<<" "<<nabi.cls<<" "<<nabi.cgpa<<endl;

    return 0;
}