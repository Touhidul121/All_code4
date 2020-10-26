#include<bits/stdc++.h>
using namespace std;

vector<int>adj[200005];
int vis[200005];
void bfs(int src)
{
    queue<int>q;
    q.push(src);
    vis[src]=1;

    while(!q.empty())
    {
        int cur=q.front();
        q.pop();

        for(int child:adj[cur])
        {
            if(vis[child]==0)
            {
                vis[child]=1;
                q.push(child);
                cout<<cur<<" "<<child<<"\n";
            }
        }
    }


}

int main()
{
    int n,m,mx=0,a,b,ind=-1;
    cin>>n>>m;

    for(int i=1;i<=m;i++)
    {
        cin>>a>>b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }

    for(int i=1;i<=n;i++)
    {
        if(mx<adj[i].size())
        {
            mx=adj[i].size();
            ind=i;
        }
    }
    bfs(ind);
}
