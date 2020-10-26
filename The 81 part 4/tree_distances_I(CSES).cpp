#include<bits/stdc++.h>
using namespace std;
const int maxN = 2e5+1;
vector<int>adj[maxN];
int vis[maxN],dist[maxN],dist1[maxN];
int max_node,max_dist;
void bfs1(int src)
{
    queue<int>q;
    q.push(src);
    dist[src]=0;
    vis[src]=1;
    while(!q.empty())
    {
        int cur=q.front();
        q.pop();
        for(int child:adj[cur])
        {
            if(!vis[child])
            {
                dist[child]=dist[cur]+1;
                vis[child]=1;
                if(max_dist<=dist[child])
                {
                    max_dist=dist[child];
                    max_node=child;
                }
                q.push(child);

            }
        }
    }
}

void bfs2(int src)
{
    queue<int>q;
    q.push(src);
    dist1[src]=0;
    vis[src]=1;
    while(!q.empty())
    {
        int cur=q.front();
        q.pop();
        for(int child:adj[cur])
        {
            if(!vis[child])
            {
                dist1[child]=dist1[cur]+1;

                q.push(child);
                vis[child]=1;
            }
        }
    }
}

int main()
{
    int n,a,b;
    cin>>n;
    for(int i=1;i<=n-1;i++)
    {
        cin>>a>>b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    bfs1(1);
    int max_node1=max_node;

    memset(vis,0,sizeof(vis));

    bfs1(max_node1);

    int max_node2=max_node;

    memset(vis,0,sizeof(vis));

    bfs2(max_node2);

    for(int i=1;i<=n;i++)
        {
            cout<<max(dist[i],dist1[i])<<" ";
        }
    cout<<"\n";

}
