#include<bits/stdc++.h>
using namespace std;

vector<int>adj[100002];
int vis[100002],in[100002],low[100002];
set<int>st;
int timer;

void dfs(int node,int par)
{
    vis[node]=1;
    in[node]=low[node]=timer++;
    int children=0;

    for(int child:adj[node])
    {
        if(child==par)
            continue;
        if(vis[child]==1)
        {
            low[node]=min(low[node],in[child]);
        }
        else
        {
            dfs(child,node);
            children++;
            low[node]=min(low[node],low[child]);
            if(low[child]>=in[node] && par!=-1)
            {
             st.insert(node);
            }

        }
    }
    if(par==-1 && children>1)
        st.insert(node);

}

int main()
{
    while(true)
    {
        int n,m,a,b;
        cin>>n>>m;
        if(n==0 && m==0)
            break;
        for(int i=1;i<=n;i++)
        {
            adj[i].clear();
            vis[i]=0;
        }
        st.clear();
        timer=1;
        for(int i=1;i<=m;i++)
        {
            cin>>a>>b;
            adj[a].push_back(b);
            adj[b].push_back(a);
        }
        for(int i=1;i<=n;i++){
                if(!vis[i])
               dfs(i,-1);
        }
        cout<<st.size()<<"\n";
    }
}
