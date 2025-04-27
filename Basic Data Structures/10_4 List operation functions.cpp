/*

Operations

myList.remove(V)
Remove the value V from the list.
O(N)

myList.sort()
Sort the list in ascending order.
O(NlogN)

myList.sort(greater<type>())
Sort the list in descending order
O(NlogN)

myList.unique()
Deletes the duplicate values from the list. You must sort the list first.
O(N), with sort O(NlogN)

myList.reverse()
Reverse the list.
O(N)



*/

#include <iostream>
#include<list>
using namespace std;
int main()
{
    list<int> myList = {20, 40, 30, 10, 50, 10, 10};
    // myList.remove(10);
   
    // myList.sort();
    // myList.sort(greater<int>());
    // myList.unique();
    myList.reverse();
    for (int val : myList)
    {
        cout << val << endl;
    }
    return 0;
}