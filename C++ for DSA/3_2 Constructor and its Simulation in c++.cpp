#include <iostream>
using namespace std;
class Student{
    public :
    int id;
    int cls;
    double cgpa;

    //constructor
    Student(int i ,int c, double g)
    {
        id= i;
        cls= c;
        cgpa =g;
    }

};
int main() 
{
    // int r,c;
    // double g;
    // cin>>r>>c>>g;
    // Student mahmud(r,c,g);
    Student mahmud(394,1,3.50);
    Student nabi(2323,4,4.23);
    cout<<mahmud.id<<" "<<mahmud.cls<<" "<<mahmud.cgpa<<endl;
    cout<<nabi.id<<" "<<nabi.cls<<" "<<nabi.cgpa<<endl;

    return 0;
}