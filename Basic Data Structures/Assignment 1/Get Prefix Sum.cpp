/*
Problem Statement

You will be given an integer array A of size N. You need to print the prefix sum array of the array A in reverse order.

Input Format

First line will contain N.
Next line of contain the array A.
Constraints

1 <= N <= 10^5
1 <= A[i] <= 10^9; Where 0 <= i < N
Output Format

Output the prefix sum array in reverse order.
Sample Input 0

5
2 4 1 5 3
Sample Output 0

15 12 7 6 2 
Explanation 0

The prefix sum of the given array is: 2 6 7 12 15.
The reverse order is: 15 12 7 6 2.
Sample Input 1

3
1000000000 1000000000 1000000000
Sample Output 1

3000000000 2000000000 1000000000
*/

#include <iostream>
#include<vector>
#include<algorithm>

using namespace std;



int main()
{
   long long  int n;
    cin>>n;
    vector<long long int>arr(n);
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
     vector<long long int>arr2(n);
    arr2[0]=arr[0];
    
    for(int i=1;i<n;i++)  
    {
        arr2[i]= arr[i]+arr2[i-1];
    }
    
    
    for(auto it=arr2.end()-1;it>=arr2.begin();it--)
    {
        cout<<*it<<" ";
    }

    return 0;
}