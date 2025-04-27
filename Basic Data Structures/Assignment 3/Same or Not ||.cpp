
/*
Problem Statement

There is a list of  values that were inserted into a stack and a list of  values 
that were inserted into a queue. You need to determine whether the 
stack and queue are the same or not based on the order in which the elements are removed.

Note: You cannot use any  here. You need to implement the stack and queue by yourself.
 You can use linked list or array as you want.

Input Format

First line will contain  and .
Second line will contain stack  with  values.
Third line will contain queue  with  values.
Constraints

Output Format

Output YES if they were same, otherwise NO.
Sample Input 0

5 5
10 20 30 40 50
50 40 30 20 10
Sample Output 0

YES
Sample Input 1

4 4
10 20 30 40
10 20 30 40
Sample Output 1

NO
Sample Input 2

5 4
1 2 3 4 5
5 4 3 2
Sample Output 2

NO
*/
#include <iostream>
#include<algorithm>

using namespace std;
class Node
{
public:
    int val;
    Node *next;
    Node *prev;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};
class myStack
{
public:
    Node *head = NULL;
    Node *tail = NULL;
    
    void push(int val)  //O(1)
    {
        
        Node *newNode = new Node(val);
        if (head == NULL)
        {
            head = newNode;
            tail = newNode;
            return;
        }
        newNode->prev = tail;
        tail->next = newNode;
        tail = tail->next;
    }
    void pop() //O(1)
    {
        
        Node *deleteNode = tail;
        tail = tail->prev;
        delete deleteNode;
        if (tail == NULL)
        {
            head = NULL;
            return;
        }
            tail->next = NULL;
 
    }
    int top()  //O(1)
    {
        return tail->val;
    }
    
    bool empty()  //O(1)
    {
       

        return head==NULL;
    }
};
class myQueue
{
public:
    Node *head = NULL;
    Node *tail = NULL;
   
    void enqueue(int val)   //O(1)
    {
       
        Node *newNode = new Node(val);
        if (head == NULL)
        {
            head = newNode;
            tail = newNode;
            return;
        }
        tail->next = newNode;
        newNode->prev = tail;
        tail = tail->next;
    }
    void dequeue()   //O(1)
    {
        
        Node *deleteNode = head;
        head = head->next;
        if (head == NULL)
        {
            tail = NULL;
            return;
        }
        head->prev = NULL;
        delete deleteNode;
    }
    int front()   //O(1)
    {
        return head->val;
    }
    
    bool empty()  //O(!)
    {
        
        return head == NULL;
    }
};
int main()
{
    myStack st;
    myQueue q;
    
    
    int n,m;
    cin >> n>>m;
    if(n!=m)
    {
        cout<<"NO";
    }
    else{
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        st.push(x);
    }
    for (int i = 0; i < m; i++)
    {
        int y;
        cin >> y;
        q.enqueue(y);
    }
    

    bool flag = true; 
    while (!st.empty() && !q.empty()) {
        if (st.top() != q.front()) {
            flag = false;
            break;
        }
        st.pop();
        q.dequeue();
    }
     if (!st.empty() || !q.empty()) {
        flag = false;
    }

    
    if (flag) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
}
}
