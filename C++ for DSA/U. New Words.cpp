#include <iostream>
using namespace std;
int main() 
{
   
    string c;
    getline(cin,c);
    int e=0,g=0,y=0,p=0,t=0;
    int i=0;
    while(c[i]!='\0')
    {
        if(c[i] =='E' || c[i] == 'e')
        {
            e++;
        }
       else if(c[i] == 'G' || c[i] == 'g')
        {
            g++;
        }
       else if(c[i] =='Y' || c[i] == 'y')
        {
            y++;
        }
       else if(c[i] =='P' || c[i] == 'p')
        {
            p++;
        }
      else  if(c[i] =='T' || c[i] == 't')
        {
            t++;
        }
        i++;
    }
    
    int m1 = min(e,g);
    int m2 = min (y,p);
    int m3 = min (m1,m2);
    cout<<min(m3,t);




    return 0;
}