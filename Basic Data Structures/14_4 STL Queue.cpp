/*
Queue Built-in Functions:

q.push()
Add an element to the tail/back of the queue.
O(1)

q.pop()
Delete the first value of the queue.
O(1)

q.front()
Access the first element of the queue.
O(1)

q.size()
Returns the size of the queue.
O(1)

q.empty()
Return true/false if the queue is empty or not.
O(1)

q.back()
Access the last element of the queue.
O(1)

*/

#include <iostream>
#include<algorithm>
using namespace std;
int main()
{
    queue<int> q;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        q.push(x);
    }
    cout << q.size() << endl;
    while (!q.empty())
    {
        cout << q.front() << endl;
        q.pop();
    }
    return 0;
}