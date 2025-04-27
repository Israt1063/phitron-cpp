/*
Problem Statement

You need to take a doubly linked list of integer value as input.
 You need to tell if the doubly linked list forms a palindrome or not.

Note: You need to solve this using Doubly Linked List, otherwise you will not get marks.

Input Format

Input will contain the values of the doubly linked list, and will terminate with -1.
Constraints

1 <= N <= 10^6; Here N is the maximum number of nodes of the linked list.
0 <= V <= 1000; Here V is the value of each node.
Output Format

Output "YES" if it forms a palindrom otherwise output "NO".
Sample Input 0

1 2 3 2 1 -1
Sample Output 0

YES
Sample Input 1

1 2 2 1 -1
Sample Output 1

YES
Sample Input 2

1 -1
Sample Output 2

YES
Sample Input 3

1 2 3 1 -1
Sample Output 3

NO
*/

#include <iostream>
#include<algorithm>
using namespace std;

class Node{
    public: 
    int value;
    Node* Next;
    Node* prev;

    Node(int value)
    {
        this->value= value;
        this->Next= NULL;
         this->prev= NULL;
    }

};

void reverse_doubly(Node* head,Node* tail)
{
    for(Node* i=head,*j=tail; i!=j && i->prev!=j; i=i->Next,j=j->prev)
    {
        swap(i->value,j->value);
    }
}
void insert_at_tail(Node* &head,Node* &tail,int val)
{
    Node* newNode = new Node(val);
    if(head == NULL)
    {
        head = newNode;
        tail= newNode;
        return;
    }
    tail->Next= newNode;
    newNode->prev= tail;

    tail= newNode;

}
int main() 
{
     Node* head= NULL;
    Node* tail=NULL;
    int val;
    while(true){
        cin>>val;
        if(val==-1)
        {
            break;
        }
        insert_at_tail(head,tail,val);
    }
   Node* head1 = head;
   Node* tail1=tail;

   reverse_doubly(head,tail);
    bool pali = true;
    Node* i = head1;
    Node* j= tail1;
    while(i!=NULL && j!=NULL)
    {
        if(i->value != j->value)
        {
            pali = false;
            break;
        }
    i=i->Next;
    j=j->prev;
    }
    // for(Node* i=head1,*j=tail1;i!=NULL && j!=NULL;i=i->Next,j=j->prev)
    // {
    //     if(i->value != j->value)
    //     {
    //         pali = false;
    //         break;
    //     }
    // }
    if(pali)
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }
    

    return 0;
}