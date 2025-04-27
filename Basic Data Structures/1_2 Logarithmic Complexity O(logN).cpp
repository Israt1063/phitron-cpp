#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    // while(n>0) // O(logN)
    // {
    //     int digit=n%10;
    //     cout<<digit<<endl;
    //     n/=10;
    // }

    for(int i=1;i<=n;i=i*2) // O(logN)
    {
        cout<<i<<endl;
    }

    //k=2;
    //  for(int i=1;i<=n;i++) // O(logN)
    // {
    //     cout<<i<<endl;
    //     i=i*k;
    // }

    return 0;
}  // if for loop (incriminate and decremen) part " * and / " then time complexity O(logN)