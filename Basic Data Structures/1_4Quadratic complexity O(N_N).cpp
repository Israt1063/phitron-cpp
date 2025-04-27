#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    // for(int i=1;i<=n;i++) // O(N*N)
    // {
    //     for(int j=1;j<=n;j++)
    //     {
    //         cout<<"hello"<<endl;
    //     }
    // }

    //  int n,m;
    // cin>>n>>m;
    // for(int i=1;i<=n;i++) // O(N*M)
    // {
    //     for(int j=1;j<=m;j++)
    //     {
    //         cout<<"hello"<<endl;
    //     }
    // }


    //  for(int i=1;i<=n;i++) // O(N*N*N)
    // {
    //     for(int j=1;j<=n;j++)
    //     {
    //            for(int k=1;k<=n;k++){

    //         cout<<"hello"<<endl;
    //            }
    //     }
    // }


    for(int i=0;i<=n-1;i++) // O(N*N)
    {
        for(int j=i+1;j<n;j++)
        {
            cout<<"*";

        }
        cout<<endl;

    }
    return 0;
}