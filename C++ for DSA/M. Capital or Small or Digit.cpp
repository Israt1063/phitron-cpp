#include <iostream>
using namespace std;

int main() 
{
    char ch;
    cin>>ch;
    if(ch>='A' && ch<='Z')
    {
        cout<<"ALPHA"<<endl;
        cout<<"IS CAPITAL"<<endl;
    }
    else if(ch>='a' && ch<='z')
    {
        cout<<"ALPHA"<<endl;
        cout<<"IS SMALL"<<endl;
    }
    else{
        cout<<"IS DIGIT";
    }

    return 0;
}