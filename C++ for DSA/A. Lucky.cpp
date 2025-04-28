#include <iostream>
using namespace std;
int main() 
{
    int n;
    cin>>n;
    cin.ignore();
    string a;
    
    while(n--)
    {
        getline(cin,a);
        int sum1=0;
        int sum2 =0;
        int n= a.size();

        string a1=a.substr(0, n / 2);
        string a2=a.substr(n / 2);
//Convert the number to a string
    int part1 = stoi(a1);
    int part2 = stoi(a2);
    
    while(part1!=0)
    {
        sum1+=part1%10;
        part1=part1/10;
    }
    while(part2!=0)
    {
        sum2+=part2%10;
        part2=part2/10;
    }
        
        if(sum1== sum2)
        {
            cout<<"YES";
        }
        else
        {
            cout<<"NO";
        }

    cout<<endl;
    }

    return 0;
}