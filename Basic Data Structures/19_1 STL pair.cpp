// #include <bits/stdc++.h>
// using namespace std;
// int main() 
// {
//     pair<string,int>p;
//    // p = make_pair("Hello",5);
//    p = {"Hello",6};
//     cout<<p.first()<<endl;
//     cout<<p.second()<<endl;

//     return 0;
// }

#include <iostream>
using namespace std;
int main() 
{
    int n;
    cin>>n;
    vector<pair<int,int>>v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i].first>>v[i].second;
        //3
        // 2 3
        // 4 6
        // 7 8
    }
    for(int i=0;i<n;i++)
    {
        cout<<v[i].first<<" "<<v[i].second<<endl;
        
    }
    return 0;
}