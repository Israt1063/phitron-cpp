// Capacity functions in c++ :
    // s.size() -> returns the size of the string.
    // s.max_size() -> returns the maximum size that string can hold.
    // s.capacity() -> returns current available capacity of the string.
    // s.clear() -> clear the string.
    // s.empty() -> return true/false if the string is empty.
    // s.resize() -> change the size of the string.

#include <iostream>
using namespace std;
int main() 
{
    // string s="Hello World";
    // cout<<s.size()<<endl;
    // cout<<s.max_size()<<endl;
    // string a="bfujdbkjvfdshjbjfbjbsdjkbfb hfgbkbjbjfbjb";
    // cout<<a.capacity()<<endl;
    // a="hhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhh";
    // cout<<a.capacity()<<endl;
    // cout<<a.size()<<endl;


     // string s="Hello";
    // cout<<s<<endl;
    // s.clear();
    // cout<<s<<endl;
    // cout<<s.size()<<endl;


       // string s="Hello";
    // s.clear();
    // if(s.empty()==true) cout<<"Empty"<<endl;
    // else cout<<"Not Empty"<<endl;


    string s;
    cin>>s;
    // s.resize(5);
    // s.resize(20,'X');
    // cout<<s.size()<<endl;
    // cout<<s<<endl;
    s.resize(5);
    cout<<s<<endl;
    s.resize(11,'X');
    cout<<s<<endl;


    return 0;
}