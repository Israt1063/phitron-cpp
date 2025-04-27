/*
Problem Statement

You need to take a singly linked list of integer value as input
 and print the difference between the maximum and minimum value of the singly linked list.

Note: You must use singly linked list to solve this problem, otherwise you will not get marks.

Input Format

Input will contain the values of the singly linked list, and will terminate with -1.
Constraints

1 <= N <= 10^5; Here N is the maximum number of nodes of the linked list.
-10^9 <= V <= 10^9; Here V is the value of each node.
Output Format

Output the difference between the maximum and minimum value.
Sample Input 0

2 4 1 5 3 6 -1
Sample Output 0

5
Sample Input 1

2 -1
Sample Output 1

0
*/

#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;
class Node{
    public: 
    int value;
    Node* Next;

    Node(int value)
    {
        this->value= value;
        this->Next= NULL;
    }

};
void insert_at_tail(Node* &head,Node* &tail,int val)
{
    Node* newnode = new Node(val);
    if(head==NULL)
    {
        head= newnode;
        tail= newnode;
        return;
    }
    tail->Next= newnode;
    tail= newnode;
}
int  find_max_value(Node* &head)
{
    
    int max_value = head->value; 
    Node* temp = head;

    while (temp != NULL) {
        if (temp->value > max_value) {
            max_value = temp->value; 
        }
        temp = temp->Next;
    }

    return max_value;
    

}
int find_min_value(Node* &head)
{
    
    int min_value = head->value; 
    Node* temp = head;

    while (temp != NULL) {
        if (temp->value < min_value) {
            min_value = temp->value; 
        }
        temp = temp->Next;
    }
    return min_value;

}
int main() 
{
    Node* head = NULL;
    Node* tail = NULL;
    int val;
    while(true)
    {
        cin>>val;
        if(val==-1)
        {
            break;
        }
        insert_at_tail(head,tail,val);
    }
    int difference= find_max_value(head)-find_min_value(head);
    cout<<difference;
    
    


    return 0;
}