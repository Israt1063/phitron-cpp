/*
Stack Built-in Functions:

st.push()
Add an element to the tail/back of the stack.
O(1)

st.pop()
Delete the last value of the stack.
O(1)

st.top()
Access the last element of the stack.
O(1)

st.size()
Returns the size of the stack.
O(1)

st.empty()
Return true/false if the stack is empty or not.
O(1)

*/

#include <iostream>
#include<algorithm>
using namespace std;
int main()
{
    stack<int> st;  
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