/*
Problem Statement

You will be given a linked list of integer values as input. You need to remove 
duplicate values from the linked list and finally print the linked list in ascending order.

Note: You need to solve this using STL List, otherwise you will not get marks.

Input Format

First line will contain the values of the singly linked list, and will terminate with -1.
Constraints

1 <= N <= 1000; Here N is the maximum number of nodes of the linked list.
0 <= V <= 1000; Here V is the value of each node.
Output Format

Output the final linked list where there will be no duplicate values.
Sample Input 0

1 2 3 4 5 -1
Sample Output 0

1 2 3 4 5 
Sample Input 1

1 2 4 2 3 5 1 4 5 2 6 1 -1
Sample Output 1

1 2 3 4 5 6 
Sample Input 2

5 5 1 1 2 4 2 4 1 3 5 0 -1
Sample Output 2

0 1 2 3 4 5 
Sample Input 3

10 10 10 20 20 20 10 20 -1
Sample Output 3

10 20 
*/

#include <iostream>
#include<algorithm>
#include<list>
using namespace std;
int main()
{
    list<int>mylist;
    int value;
    
    //list input
    while(1)
    {
        cin>>value;
        if(value==-1)
        {
            break;
        }
        mylist.push_back(value);
    }
    mylist.sort();
    mylist.unique();
    
    for(int x : mylist)
    {
        cout<<x<<" ";
    }

    return 0;
}