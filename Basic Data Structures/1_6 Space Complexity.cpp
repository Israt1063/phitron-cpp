#include <iostream>
using namespace std;
int main() 
{
    int n; // O(1)
    cin>>n;
    int array[n];  //O(N)
    // int array[n][n]   // O(N*N)
    for(int i=0;i<n;i++)
    {
        cin>>array[i];

    }
     for(int i=0;i<n;i++)
    {
        cout<<array[i]<<" ";
        
    }

    return 0;
}