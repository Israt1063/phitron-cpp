#include <iostream>
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
    /*
    sort(stsrting , ending ) 
    sort(a, a + n); --> ascending
    sort(a, a + n, greater<int>()); --> descending
    */

   sort(a, a + n, greater<int>());

    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }

    return 0;
}