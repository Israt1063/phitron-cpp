#include <iostream>
using namespace std;
int main() 
{
    string s;
    int t;
    cin>>t;
    
    while(t--){
    
    cin>>s;
   
    int d= s.size();
    if(d>10)
    {
       
         //cout<<s.front()<<d-2<<s.back()<<endl;
        cout<<s[0]<<d-2<<s[d-1]<<endl;
    }
    else{
         cout<<s<<endl;
    }
    }
    return 0;
    
}