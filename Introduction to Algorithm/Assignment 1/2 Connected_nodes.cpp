/*Problem Statement

You will be given an undirected graph as input. Then you will be given  queries. For each query you will be given a node . You need to print the nodes that are connected with  in descending order.

Note: If there is no node connected to , then print -1.

Input Format

The first line will contain  and , the number of nodes and the number of edges, respectively. The values of the nodes range from  to .
Next  lines will contain two node values which means there is a connection between first node and second node.
The next line will contain .
The following  lines will each contain .
Constraints





Output Format

Output the nodes that are connected with  in descending order.
Sample Input 0

6 8
0 4
0 5
4 2
4 3
5 3
2 0
0 1
1 3
6
0
1
2
3
4
5
Sample Output 0

5 4 2 1 
3 0 
4 0 
5 4 1 
3 2 0 
3 0 
Sample Input 1

5 3
0 1
1 2
0 4
2
3
0
Sample Output 1

-1
4 1 */

//Solution:
#include <iostream>
#include<vector>
using namespace std;

int main() {
    int N, E;
    cin >> N >> E;

    vector<int> adj[N];

    for (int i = 0; i < E; i++) {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    int Q;
    cin >> Q;

    while (Q--) {
        int X;
        cin >> X;

        if (adj[X].empty()) {
            cout << "-1\n";
        } else {
            sort(adj[X].rbegin(), adj[X].rend());

            for (int i = 0; i < adj[X].size(); i++) {
                int node = adj[X][i];
                cout << node << " ";
            }
            cout << "\n";
        }
    }

    return 0;
}