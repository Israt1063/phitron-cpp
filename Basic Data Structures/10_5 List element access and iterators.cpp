/*
Element access

myList.back()
Access the tail element.
O(1)

myList.front()
Access the head element.
O(1)

next(myList.begin(),i)
Access the ith element
O(N)


Iterators

myList.begin()
Pointer to the first element.
O(1)

myList.end()
Pointer to the last element.
O(1)

*/
#include <iostream>
#include<list>
using namespace std;
int main()
{
    list<int> myList = {10, 20, 30, 40, 50};
    // cout << myList.front();
    // cout << myList.back();
    cout << *next(myList.begin(), 3) << endl;
    return 0;
}