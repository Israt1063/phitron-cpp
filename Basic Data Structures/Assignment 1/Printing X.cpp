
/*
Problem Statement

You will be given an positive odd integer N, you need to print the pattern for it. See sample input and output for understanding the pattern.

Input Format

Input will contain only N.
Constraints

1 <= N <= 20 and N is odd.
Output Format

Output the pattern.
Sample Input 0

5
Sample Output 0

\   /
 \ / 
  X  
 / \ 
/   \
Sample Input 1

7
Sample Output 1

\     /
 \   / 
  \ /  
   X   
  / \  
 /   \ 
/     \
Sample Input 2

3
Sample Output 2

\ /
 X 
/ \
Sample Input 3

1
Sample Output 3

X
*/

#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;
    
    for (int i = 0; i < N / 2; i++) {
       
        for (int j = 0; j < i; j++) {
            cout << " ";
        }
        cout << "\\";
        
        
        for (int j = 0; j < N - 2 - 2 * i; j++) {
            cout << " ";
        }
        
        cout << "/";
        cout << endl;
    }
    
    cout << string(N / 2, ' ') << "X" << endl;
    
    for (int i = N / 2 - 1; i >= 0; i--) {
        
        for (int j = 0; j < i; j++) {
            cout << " ";
        }
        cout << "/";
        
        for (int j = 0; j < N - 2 - 2 * i; j++) {
            cout << " ";
        }
        cout << "\\";
        cout << endl;
    }
    
    return 0;
}
