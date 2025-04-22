#include<iostream>
#include<vector> 
using namespace std;
int main()
{
    int n,e;
    cin >> n >> e;
    vector<pair<int,int>> edge_list;

    while(e--)
    {
        int a,b;
        cin >> a >> b;
        edge_list.push_back({a,b});
    }

    for(auto p : edge_list)  //auto = pair<int,int>
    {
        cout << p.first << " " << p.second << endl;
    }

    return 0;
}