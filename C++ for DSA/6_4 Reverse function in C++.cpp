#include<iostream>
using namespace std;
int main() 
{
     int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
   
    // for(int i=0;i<n/2;i++)
    // {
    //      swap(a[i], a[n - i - 1]);// array swap
        
    // }

    reverse(a,a+n);
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }

/*
string s;
cin>>s;
reverse(s.begin(), s.end());
cout<<s<<endl;
*/
    return 0;
}