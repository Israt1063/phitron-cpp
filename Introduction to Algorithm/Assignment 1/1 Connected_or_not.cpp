/*Problem Statement

You will be given a directed graph as input. Then you will receive  queries. For each query, you will be given two nodes,  and . You need to determine whether you can go from  to  directly without using any other nodes.

Input Format

The first line will contain  and , the number of nodes and the number of edges, respectively. The values of the nodes range from  to .
Next  lines will contain two node values which means there is a connection from first node to second node.
The next line will contain .
The following  lines will each contain  and .
Constraints

Output Format

For each query output YES if it is possible to go from  to  directly without using any other nodes, NO otherwise. Don't forget to put a new line after each query.
Sample Input 0

5 6
0 1
1 2
2 3
3 4
1 4
0 2
10
0 1
1 0
2 2
2 3
0 3
3 0
1 4
4 1
4 3
1 2
Sample Output 0

YES
NO
YES
YES
NO
NO
YES
NO
NO
YES
Submissions: 590
Max Score: 20
Difficulty: Easy
Rate This Challenge:
    
More

*/

//Solution:
#include <iostream>
#include<vector>
using namespace std;

const int N = 1e5 + 5;
vector<int> adj[N];

bool dfs(int u, int v) {
    if (u == v) return true; 
    for (int neighbor : adj[u]) {
        if (neighbor == v) {
            return true;
        }
    }
    return false;
}

int main() {
    int n, e;
    cin >> n >> e;
    for (int i = 0; i < e; i++) {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
    }
    
    int q;
    cin >> q;
    while (q--) {
        int u, v;
        cin >> u >> v;
        if (dfs(u, v)) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
    
    return 0;
}
