#include<bits/stdc++.h>
using namespace std;

vector<int>adj[100002];
int vis[100002];
int dist[100002];

void dfs(int src,int d)
{
    if(!vis[src])
    {
        vis[src]=1;
        dist[src]=d;
        for(auto x:adj[src])
        {
            if(!vis[x])
            {
                dfs(x,d+1);
            }
        }
    }
}
