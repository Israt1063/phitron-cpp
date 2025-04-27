// Stack = LIFO (Last In First Out)

#include <iostream>
#include<algorithm>
#include<vector>
using namespace std;
class myStack
{
public:
    vector<int> v;
    void push(int val) //O(1)
    {
        v.push_back(val);
    }
    void pop() //O(1)
    {
        v.pop_back();
    }
    int top() //O(1)
    {
        return v.back();
    }
    int size()  //O(1)
    {
        return v.size();
    }
    bool empty()  //O(1)
    {
        // if (v.size() == 0)
        //     return true;
        // else
        //     return false;

       return v.empty();

    }
};
int main()
{
    myStack st;    // object

    int n;
    cin >> n;
    //input stack
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        st.push(x);
    }
    // st.push(10);
    // st.push(20);
    // st.push(30);
    // cout<<st.top()<<endl;
    // st.pop();
    //  cout<<st.top()<<endl;

    //print stack
    while (st.empty() == false)
    {
        cout << st.top() << endl;
        st.pop();
    }

    return 0;
}