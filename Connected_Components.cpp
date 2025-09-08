#include <bits/stdc++.h>
using namespace std;
const int maxx=100000;
vector<int>adj[maxx+5];
bool vis[maxx+5];
void dfs(int u)
{
    vis[u]=true;
    for(auto it:adj[u])
    {
        if(vis[it]==false)
            dfs(it);
    }
}
int main()
{
    int n,e;
    cin>>n>>e;
    for (int i=1; i<=e; i++)
    {
        int a,b;
        cin>>a>>b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    int cou=0;
    for (int i=0; i<n; i++)
    {
        if(vis[i]==false)
        {
            dfs(i);
            cou++;
        }
    }
    cout<<cou;
}
