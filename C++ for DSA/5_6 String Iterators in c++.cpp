// Iterators in c++ :
    // s.begin() -> pointer to the first element.
    // s.end() -> pointer to the next element after the last element of the string.


#include <iostream>

#include<string>
using namespace std;
int main() 
{
    string s;
    cin>>s;
    // for(int i=0;i<s.size();i++)
    // {
    //     cout<<s[i]<<endl;
    // }

    // cout<<*s.begin()<<endl;
    // cout<<*(s.end()-1)<<endl;
    
    //for(string iterators it=s.begin();it<s.end();it++) -->>string iterators == auto
    for(auto it=s.begin();it<s.end();it++)
    {
        cout<<*it<<endl;
    }

    return 0;
}