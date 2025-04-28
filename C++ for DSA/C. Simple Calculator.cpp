#include <iostream>
using namespace std;

int main() 
{
    long long int n,m,sum,mul,sub;
    cin>>n>>m;
    sum = n+m;
    mul = n*m;
    sub = n-m;

    cout<<n<<" "<<"+"<<" "<<m<<" "<<"="<<" "<<sum<<endl;
    cout<<n<<" "<<"*"<<" "<<m<<" "<<"="<<" "<<mul<<endl;
    cout<<n<<" "<<"-"<<" "<<m<<" "<<"="<<" "<<sub<<endl;


    return 0;
}