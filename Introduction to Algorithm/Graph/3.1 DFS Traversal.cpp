//DFS Traversal ->Depth-wise
//use adj_list for input

#include<iostream>
#include<vector>
using namespace std;
vector<int>adj_list[1005];
bool vis[1005];

void dfs(int src){
    cout<<src<<" ";
    vis[src]=true;
    for(int child:adj_list[src])
        if(!vis[child])
        dfs(child);
}

int main()
{
    int n,e;
    cin>>n>>e;
    while(e--){
    int a,b;
    cin>>a>>b;
    adj_list[a].push_back(b);
    adj_list[b].push_back(a);
}
memset(vis,false,sizeof(vis));
dfs(0);
return 0;
}