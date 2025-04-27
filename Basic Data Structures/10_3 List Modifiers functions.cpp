/*
Modifiers

myList= or myList.assign(list2.begin(),list2.end())
Assign another list.
O(N)

myList.push_back()
Add an element to the tail.
O(1)

myList.push_front()
Add an element to the head.
O(1)

myList.pop_back()
Delete the tail.
O(1)

myList.pop_front()
Delete the head.
O(1)

myList.insert()
Insert elements at a specific position.
O(N+K); where K is the number of elements to be inserted.

myList.erase()
Delete elements from a specific position.
O(N+K); where K is the number of elements to be deleted.


replace(myList.begin(),myList.end(),value,replace_value)
Replace all the value with replace_value. Not under a list STL.
O(N)

find(myList.begin(),myList.end(),V)
Find the value V. Not under a list STL.
O(N)


*/

#include <iostream>
#include<algorithm>
#include<list>
using namespace std;
int main()
{
    list<int> myList = {10, 20, 30, 40, 30, 30, 70};

    //list<int> myList2;
    //myList2=myList;
   // myList2.assign(myList.begin(),myList.end());

    // myList.push_back(100);
    // myList.push_front(300);

    // list<int> newList = {100, 200, 300};
    // vector<int> v = {60, 70, 80};
    // myList.pop_back();
    // myList.pop_back();
    // myList.pop_front();

     cout<< *next(myList.begin(),2)<<endl;  // index access to find value. like=a[2]. (start,index)
    // myList.insert(next(myList.begin(), 3), 100);
    // myList.erase(next(myList.begin(), 2));
    // myList.insert(next(myList.begin(), 3), v.begin(), v.end());
    // myList.erase(next(myList.begin(), 2), next(myList.begin(), 5)); // 2 - 4 index delete
    // replace(myList.begin(), myList.end(), 30, 100);

    // for (int val : myList2)
    // {
    //     cout << val << endl;
    // }


    auto it = find(myList.begin(), myList.end(), 60);
    if (it == myList.end())
    {
        cout << "Not found";
    }
    else
    {
        cout << "Found";
    }
    return 0;
}