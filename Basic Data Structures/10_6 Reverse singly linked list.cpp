
  
#include <iostream>
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

void Insert_at_tail( Node* &head,Node* &tail,int val) 
{
    
    Node* newnode = new Node(val);
    if(head== NULL)
    {
        head=newnode;
        tail= newnode;
        
        return;
    }

   
    tail->Next= newnode;
    tail= tail->Next;  //tail= newnode;
}
void print_linkedlist(Node* head)
{
    Node* tmp = head;
    while(tmp != NULL)
    {
       cout<< tmp->value<<" ";
       tmp= tmp->Next;
    }

cout<<endl;
}
void  reverse_linked_list(Node* &head,Node* &tail,Node* tmp)
{
    //base case
    if(tmp->Next==NULL)
    {
        head = tmp;
        return;
    }
    
    reverse_linked_list(head,tail,tmp->Next);
   //code
   tmp->Next->Next=tmp;
   tmp->Next=NULL;

   tail= tmp;
    
    
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
        Insert_at_tail(head,tail,val);
    }

 reverse_linked_list( head,tail,head);
 print_linkedlist( head);
 cout<<head->value<<endl;
 cout<< tail->value<<endl;

 


    return 0;
}
