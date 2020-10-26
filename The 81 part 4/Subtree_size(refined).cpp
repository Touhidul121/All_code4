#include<bits/stdc++.h>
using namespace std;
vector<int>adj[100001];
int vis[100001],size[100001];

int dfs(int node)
{
    vis[node]=1;
    int cur_size=1;
    for(int child:adj[node])
    {
        if(!vis[child])
            cur_size+=dfs(child);

    }
    size[node]=cur_size;
    return cur_size;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n,m,a,b;
    cin>>n>>m;

    for(int i=1;i<=m;i++)
    {
        cin>>a>>b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    dfs(1);

    for(int i=1;i<=n;i++)
        cout<<size[i]<<" ";
}
