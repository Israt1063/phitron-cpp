/*
Problem Statement

You are given a doubly linked list of unique string values. These strings refer to web 
addresses without any spaces. You will be given Q queries. In each query you will be given
 some commands. Type of commands are -

visit address - You need to go to that address from where you are in that list and print
 that address if it is in the list. Otherwise print "Not Available".
next - You need to go to the next address from where you are in that list and print that 
address if it is in the list. Otherwise print "Not Available".
prev - You need to go to the previous address from where you are in that list and print that
 address if it is in the list. Otherwise print "Not Available".
One more thing, if the address isn't available make sure you don't move from your current position.
 You are at the head initially.

Note: You can use Singly/Doubly Linked List or STL List to solve this problem.

Input Format

First line will contain the values of the doubly linked list, and will terminate with the
 string "end".
Second line will contain Q.
Next Q lines will contain the commands. It is guranteed that you will get "visit address"
 command at first which will contain a valid address. It will not contain valid address everytime!
Constraints

1 <= N <= 1000; Here N is the maximum number of nodes of the linked list.
1 <= Q <= 1000;
1 <= |Address| <= 100; Here |Address| is the length of the string address.
Output Format

For each query output as asked.
Sample Input 0

facebook google phitron youtube twitter end
12
visit phitron
prev
prev
prev
prev
next
visit twitter
next
next
prev
visit django
prev
Sample Output 0

phitron
google
facebook
Not Available
Not Available
google
twitter
Not Available
Not Available
youtube
Not Available
phitron
*/

#include <iostream>
#include<algorithm>
using namespace std;

class Node {
public:
    string add;
    Node* next;
    Node* prev;

    Node(string add) {
        this->add = add;
        this->next = NULL;
        this->prev = NULL;
    }
};

void insert_at_tail(Node*& head, Node*& tail, string add) {
    Node* newNode = new Node(add);
    if (head == NULL) {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    newNode->prev = tail;
    tail = newNode;
}

void visit_address(Node* &newHead, Node* head, string add) {
    Node* tmp = head;
    while (tmp != NULL) {
        if (tmp->add == add) {
            newHead = tmp;
            cout << newHead->add << endl;
            return;
        }
        tmp = tmp->next;
    }
    cout << "Not Available" << endl;
}


void go_to_next(Node*& newHead) {
    if (newHead->next != NULL) {
        newHead =newHead->next;
        cout << newHead->add << endl;
    } else {
        cout << "Not Available" << endl;
    }
}

void go_to_prev(Node*& newHead) {
    if (newHead->prev != NULL) {
        newHead = newHead->prev;
        cout << newHead->add << endl;
    } else {
        cout << "Not Available" << endl;
    }
}

int main() {
    Node* head = NULL;
    Node* tail = NULL;

    
    string add;
    while (true) {
        cin >> add;
        if (add == "end") {
            break;
        }
        insert_at_tail(head, tail, add);
    }

    int q;
    cin >> q;

    Node* newHead = head;  

    while (q--) {
        string com;
        cin >> com;

        if (com == "visit") {
            string newAdd;
            cin >> newAdd;
            visit_address(newHead, head, newAdd);
        } else if (com == "next") {
            go_to_next(newHead);
        } else if (com == "prev") {
            go_to_prev(newHead);
        }
    }

    return 0;
}