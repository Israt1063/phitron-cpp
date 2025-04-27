
/*
Problem Statement

You will be given  queries. In each query you will get a command. The command is of two
 types -

You will be given  and  of a person who stood in a line of a ticket counter.
You will be given only  which means the person in front of the line got the ticket and
 will be removed from the line. You need to print the name of that person who got that ticket.
  If there are no one in the line, print .
Note: There can be multiple person in the line with same name. You need to solve it using STL
 Stack or Queue only.

Input Format

First line will contain .
Next  lines will contain the commands.
Constraints

. Here |Name| means the length of the string and it will not contain any space.
 The string will contain only small English alphabets.
Output Format

For each time someone get out of the line, print his/her name. Print a new line after that.
Sample Input 0

5
0 rahim
0 karim
1
0 sakib
1
Sample Output 0

rahim
karim
Sample Input 1

8
1
0 embappe
0 neymar
1 
1
0 messi
1
1
Sample Output 1

Invalid
embappe
neymar
messi
Invalid
*/
#include <iostream>
#include<algorithm>

using namespace std;



int main()
{
   
    int n;
    cin>>n;
    queue<string>q;
    while(n--)
    {
        int m;
        string s;

        cin >> m;
        
        if(m==0)
        {
            //getline(cin,s);
            cin>>s;
            q.push(s);
            
        }
        
        
        else if (m == 1) { 
           if (!q.empty()) {
                cout<<q.front()<< endl;
                q.pop();
           }
            else {
                cout << "Invalid" << endl;
            }
        }
    }

   
}
