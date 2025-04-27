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

void print_Doubly_linkedlist(Node* head)
{
   
    Node* temp = head;
    while(temp!= NULL)
    {
        cout<<temp->value<<" ";
        temp = temp->Next;
    }
    cout<<endl;

}
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

reverse_doubly(head,tail);
print_Doubly_linkedlist(head);
cout<<head->value<<endl;
cout<<tail->value<<endl;
    return 0;
}