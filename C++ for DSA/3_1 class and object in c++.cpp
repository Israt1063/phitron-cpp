#include <iostream>
using namespace std;
class Student{
    public :
    char name[100];
    int id;
    double cgpa;

};
int main() 
{
    Student s1,s2;
    // char temp[100]="Mahmud";
    // strcpy(s1.name,temp);
    // s1.id = 394;
    // s1.cgpa = 3.50;
    // cout<<s1.name<<" "<<s1.id<<" "<<s1.cgpa;


    // cin>>s1.name>>s1.id>>s1.cgpa;
    // cin>>s2.name>>s2.id>>s2.cgpa;
    // cout<<s1.name<<" "<<s1.id<<" "<<s1.cgpa<<endl;
    // cout<<s2.name<<" "<<s2.id<<" "<<s2.cgpa<<endl;
   cin. getline(s1.name,100);
    cin>>s1.id>>s1.cgpa;
    cin.ignore();//getchar()
    cin. getline(s2.name,100);
    cin>>s2.id>>s2.cgpa;
    cout<<s1.name<<" "<<s1.id<<" "<<s1.cgpa<<endl;
     cout<<s2.name<<" "<<s2.id<<" "<<s2.cgpa<<endl;



    return 0;
}