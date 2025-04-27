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
    int sz = 0;
    void push(int val)  //O(1)
    {
        sz++;
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
        sz--;
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
    int size()  //O(1)
    {
        return sz;
    }
    bool empty()  //O(1)
    {
        // if (sz == 0)
        //     return true;
        // else
        //     return false;

        // if(head==NULL)
        // {
        //     return true;
        // }
        // else{
        //     return false;
        // }

        return head==NULL;
    }
};
int main()
{
    myStack st;
    
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        st.push(x);
    }
    while (!st.empty())
    {
        cout << st.top() << endl;
        st.pop();
    }
    return 0;
}