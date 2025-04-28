// Element access in c++ :
    // S[i] -> access the ith index of the string.
    // s.at(i) -> access the ith index of the string.
    // s.back() -> access the last element of the string.
    // s.front() -> access the first element of the string.

#include <iostream>
using namespace std;
int main() 
{
      string s;
    cin>>s;
    cout<<s[0]<<endl;
    cout<<s.at(0)<<endl;
    cout<<s[s.size()-1]<<endl;
    cout<<s.back()<<endl;
    cout<<s.front()<<endl;

    return 0;
}