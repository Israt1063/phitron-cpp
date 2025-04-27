/*
Constructor


list<type>myList;
Construct a list with 0 elements.
O(1)

list<type>myList(N);
Construct a list with N elements and the value will be garbage.
O(N)

list<type>myList(N,V);
Construct a list with N elements and the value will be V.
O(N)

list<type>myList(list2);
Construct a list by copying another list list2.
O(N)

list<type>myList(A,A+N);
Construct a list by copying all elements from an array A of size N.
O(N)

list<type>myList(v.begin(),v.end());
Construct a list by copying all elements from a vector v.
O(N)


*/
#include <iostream>
#include<algorithm>
#include<vector>
#include<list>
using namespace std;
int main()
{
    // list<int> myList;

    // list<int> myList(10, 5);

    // list<int> myList(list2);

    //int a[5] = {10, 20, 30, 40, 50};
    // list<int> myList(a, a + 5);

    vector<int> v = {100, 200, 300};
    list<int> myList(v.begin(), v.end());

    // for (auto it = myList.begin(); it != myList.end(); it++)
    // {
    //     cout << *it << endl;
    // }
    for (int val : myList)
    {
        cout << val <<" ";
    }
    return 0;
}