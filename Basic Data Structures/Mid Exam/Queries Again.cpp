/*
Problem Statement

You have a doubly linked list which is empty initially. Then you will be given Q queries.
 In each query you will be given two values X and V.

You need to insert the value V at index X. Assume that index starts from 0.
After that for each query you need to print the linked list from left to right and right to left.
If the index is invalid, then print "Invalid".
Note: You must use Doubly Linked List, otherwise you will not get marks.

Input Format

First line will contain Q.
Next Q lines will contain X and V.
Constraints

1 <= Q <= 1000;
0 <= X <= 1000;
0 <= V <= 1000
Output Format

For each query print the linked list from left to right and right to
 left or print "Invalid" as asked.
Print "L -> " before printing the linked list from left to right.
Print "R -> " before printing the linked list from right to left.
Sample Input 0

5
1 10
0 10
1 20
3 30
2 30
Sample Output 0

Invalid
L -> 10 
R -> 10 
L -> 10 20 
R -> 20 10 
Invalid
L -> 10 20 30 
R -> 30 20 10 
Sample Input 1

10
0 10
1 20
0 30
1 40
6 50
0 60
4 70
4 80
2 90
1 100
Sample Output 1

L -> 10 
R -> 10 
L -> 10 20 
R -> 20 10 
L -> 30 10 20 
R -> 20 10 30 
L -> 30 40 10 20 
R -> 20 10 40 30 
Invalid
L -> 60 30 40 10 20 
R -> 20 10 40 30 60 
L -> 60 30 40 10 70 20 
R -> 20 70 10 40 30 60 
L -> 60 30 40 10 80 70 20 
R -> 20 70 80 10 40 30 60 
L -> 60 30 90 40 10 80 70 20 
R -> 20 70 80 10 40 90 30 60 
L -> 60 100 30 90 40 10 80 70 20 
R -> 20 70 80 10 40 90 30 100 60 
*/

#include <iostream>
#include<algorithm>
using namespace std;

class Node {
public:
    int value;
    Node* Next;
    Node* prev;

    Node(int value) {
        this->value = value;
        this->Next = NULL;
        this->prev = NULL;
    }
};

void print_from_left(Node* head) {
    cout << "L -> ";
    if (head == NULL) {
        cout << endl;
        return;
    }
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->value << " ";
        temp = temp->Next;
    }
    cout << endl;
}

void print_from_right(Node* tail) {
    cout << "R -> ";
    if (tail == NULL) {
        cout << endl;
        return;
    }
    Node* temp = tail;
    while (temp != NULL) {
        cout << temp->value << " ";
        temp = temp->prev;
    }
    cout << endl;
}

bool insert_at_position(Node*& head, Node*& tail, int idx, int val) {
    Node* newNode = new Node(val);


    if (idx == 0) {
        if (head == NULL) { 
            head = newNode;
            tail = newNode;
        } else {
            newNode->Next = head;
            head->prev = newNode;
            head = newNode;
        }
        return true;
    }

    Node* temp = head;
    int newidx = 0;

    while (temp != NULL && newidx < idx - 1) {
        temp = temp->Next;
        newidx++;
    }

    if (temp == NULL) {
        //delete newNode;
        return false;
    }

    newNode->Next = temp->Next;
    newNode->prev = temp;

    if (temp->Next != NULL) {
        temp->Next->prev = newNode;
    } else { 
        tail = newNode;
    }

    temp->Next = newNode;
    return true;
}

int main() {
    Node* head = NULL;
    Node* tail = NULL;

    int Q;
    cin >> Q;

    while (Q--) {
        int idx, val;
        cin >> idx >> val;

        if (!insert_at_position(head, tail, idx, val)) {
            cout << "Invalid" << endl;
        } else {
            print_from_left(head);
            print_from_right(tail);
        }
    }

    return 0;
}