#include <iostream>
using namespace std;
int main() 
{
    int t;
    cin>>t;
    char s[t];
    int cont_A=0;
    int cont_D=0;
    for(int i=0;i<t;i++){
        cin>>s[i];

        if(s[i]=='A')
        {
            cont_A++;
        }
        else if(s[i]=='D')
        {
            cont_D++;
        }
    }
    if(cont_A>cont_D)
    {
        cout<<"Anton";
    }
    else if (cont_A==cont_D){
        cout<<"Friendship";
    }
    else{
        cout<<"Danik";
    }


    


    return 0;
}