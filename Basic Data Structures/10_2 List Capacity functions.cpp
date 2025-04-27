/*
Capacity
	

myList.size()
Returns the size of the list.
O(1)

myList.max_size()
Returns the maximum size that the list can hold.
O(1)

myList.clear()
Clears the list elements. 
O(N)

myList.empty()
Return true/false if the list is empty or not.
O(1)

myList.resize()
Change the size of the list.
O(K); where K is the difference between new size and current size.


*/

#include <iostream>
#include<list>
using namespace std;
int main()
{
    list<int> myList = {10, 20, 30};
    // cout << myList.max_size();

    // myList.clear();

    // if(myList.empty())
    // {
    //     cout<<"enpty"<<endl;
    // }

    myList.resize(2);
    myList.resize(5, 100);  //size,value

    
    cout << myList.size() << endl;

    for (int val : myList)
    {
        cout << val << endl;
    }
    return 0;
}