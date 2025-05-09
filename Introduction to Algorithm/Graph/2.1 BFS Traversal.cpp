//BFS = Breadth(level) First Search
//DFS = Depth First Search

#include<iostream>
#include<vector> 
using namespace std;
vector<int> adj_list[1005];
bool vis[1005];

void bfs(int src)  //O(V+Edge)    
{
    queue<int> q;
    q.push(src);
    vis[src] = true;

    while(!q.empty())   //O(Vertices)
    {
        // ber kore ana
        int par = q.front();
        q.pop();

        // oi node ke niye kaj
        cout << par << " ";

        // children gulo push kora
        for(int child : adj_list[par])  //O(Edge)
        {
            if(!vis[child])
            {
                q.push(child);
                vis[child] = true;
            }
            
        }
    }

}

int main()
{
    int n,e;
    cin >> n >> e;
    while(e--)
    {
        int a,b;
        cin >> a >> b;
        adj_list[a].push_back(b);
        adj_list[b].push_back(a);
    }
    memset(vis,false,sizeof(vis));
    bfs(0);
    return 0;
}