/*
Problem Statement

You have a singly linked list which is empty initially.
 Then you will be given Q queries. In each query you will be given two values X and V.

If X is 0 that means you will insert the value V to the head of the linked list.
If X is 1 then you will insert the value V to the tail of the linked list.
If X is 2 then you will delete the value Vth index of the linked list.
 Assume that index starts from 0. If the index is invalid,
  then you shouldn't perform the deletion.
After each query you need to print the linked list.
Note: You must use singly linked list, otherwise you will not get marks.

Input Format

First line will contain Q.
Next Q lines will contain X and V.
Constraints

1 <= Q <= 1000;
0 <= X <= 2;
0 <= V <= 10^9
Output Format

For each query ouput the updated linked list.
Sample Input 0

4
0 10
1 20
1 30
0 40
Sample Output 0

10 
10 20 
10 20 30 
40 10 20 30 
Sample Input 1

11
0 10
2 5
1 20
1 30
0 40
2 0
0 50
2 2
1 60
2 3
2 3
Sample Output 1

10 
10 
10 20 
10 20 30 
40 10 20 30 
10 20 30 
50 10 20 30 
50 10 30 
50 10 30 60 
50 10 30 
50 10 30 
Sample Input 2

10
1 4
2 1
0 9
0 10
2 2
1 5
2 0
2 1
2 5
2 2
Sample Output 2

4 
4 
9 4 
10 9 4 
10 9 
10 9 5 
9 5 
9 
9 
9 
*/


#include <iostream>
#include<algorithm>
using namespace std;

class Node {
public:
    int value;
    Node* next;

    Node(int value) {
        this->value = value;
        this->next = NULL;  
    }
};

void insertAtHead(Node* &head, int value) {
    Node* newNode = new Node(value);
    newNode->next = head;
    head = newNode;
}

void insertAtTail(Node* &head, Node* &tail, int value) {
    
{
    
    Node* newnode = new Node(value);
    if(head== NULL)
    {
        head=newnode;
        tail= newnode;
        
        return;
    }

   
    tail->next= newnode;
    tail= tail->next;  //tail= newnode;
}
}

void deleteAtPosition(Node* &head, Node* &tail, int index) {
    if (head == NULL || index < 0) return;
    
    if (index == 0) {
        Node* temp = head;
        head = head->next;
        if (head == NULL) tail = NULL;  
        delete temp;
        return;
    }

    Node* current = head;
    for (int i = 0; current != NULL && i < index - 1; ++i) {
        current = current->next;
    }

    if (current == NULL || current->next == NULL) return;

    Node* nextNode = current->next->next;
    if (current->next == tail) tail = current;  
    delete current->next;
    current->next = nextNode;
    
//{

//     Node* temp= head;
//     for(int i=1;i<index;i++)
//     {
//         temp= temp->next;
//     }
//    Node* deletenode = temp->Next;
//     temp->next= temp->next->next;
//    delete deletenode;
//   tail= temp;
    
//}
}

void printLinkedList(Node* head) {
    Node* current = head;
    while (current != NULL) {
        cout << current->value << " ";
        current = current->next;
    }
    cout << endl;
}

int main() {
    Node* head = NULL;
    Node* tail = NULL;
    int Q;
    cin >> Q;

    for (int i = 0; i < Q; ++i) {
        int X, V;
        cin >> X >> V;
        if (X == 0) {
            insertAtHead(head, V);
            if (tail == NULL) tail = head;
        } 
        else if (X == 1) {
            insertAtTail(head, tail, V);
        } 
        else if (X == 2) {
            deleteAtPosition(head, tail, V);
        }
        printLinkedList(head);
    }

    return 0;
}