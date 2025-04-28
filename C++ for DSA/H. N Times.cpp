#include <iostream>
using namespace std;
int  N_Times(int t)
{
    
    while(t--)
    {
        int n;
        char c;
        cin>>n>>c;
        for(int i=0;i<n;i++)
        {
            cout<<c<<" ";

        }
        cout<<endl;
    }
}
int main() 
{
    int t;
    cin>>t;
    // while(t--)
    // {
    //     int n;
    //     char c;
    //     cin>>n>>c;
    //     for(int i=0;i<n;i++)
    //     {
    //         cout<<c<<" ";

    //     }
    //     cout<<endl;
    // }
    N_Times(t);


    return 0;
}