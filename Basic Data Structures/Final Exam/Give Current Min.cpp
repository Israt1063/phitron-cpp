/*
Problem Statement

You will be given a list  of size . Then you will be given  queries, for each query there 
will be some commands. Commands are given below -

 0 -> Insert  into the list. Then print the current minimum value from the list.
 1-> Print the current minimum value from the list.
 2-> Delete the current minimum value from the list and print the minimum value from the 
 list after deletion.
Note: If the list is empty and you can't print anything then you should print "Empty".

Input Format

First line will contain .
Second line will contain the list  of size .
Third line will contain .
Next  lines will contain the commands.
Constraints

 ; Here  means the values of the list .
Output Format

For each command, print as asked from the list.
Sample Input 0

4
10 -10 -5 -20
10
1
2
2
2
2
0 10
1
2
0 20
1
Sample Output 0

-20
-10
-5
10
Empty
10
10
Empty
20
20
Sample Input 1

6
45 -30 83 -99 19 75 
9
1
2
2
0 32
0 6
2
2
0 -86
1
*/

#include <iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main() 
{
    int n;
    cin>>n;
    priority_queue<int,vector<int>,greater<int>>pq;  // min heap
    
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        pq.push(x);
        
                
    }
    
   int t;
    cin>>t;
    while(t--){
    
    int g;
    cin>>g;
    switch(g)
    {
        case 0:
            {
                int l;
                cin >> l;
                pq.push(l);
                if (!pq.empty())
                {
                    cout << pq.top() << endl;
                }
                break;
            }
        case 1:
            {
                  if (pq.empty()) 
                  {
                    cout << "Empty" << endl;
                    } 
                else 
                  {
                    cout << pq.top() << endl;
                }
                break;
            }
        case 2 :
            {
                   if (pq.empty()) 
                   {
                    cout << "Empty" << endl;
                } else 
                   {
                    pq.pop();
                    if (pq.empty())
                    {
                        cout << "Empty" << endl;
                    } 
                   else 
                    {
                        cout << pq.top() << endl;
                    }
                }
                break;
                
            }
    }
    }
    
    
   
}