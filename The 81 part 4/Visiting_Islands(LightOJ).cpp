#include<bits/stdc++.h>
using namespace std;
#define maxN 100001
vector<int>adj[maxN];
int vis[maxN];
int x,cnt;
bool f=true;
void dfs(int node)
{
   vis[node]=1;
   cnt++;
   if(adj[node].size()==1 && f)
   {
       x=node;
       f=false;
   }
   for(int child:adj[node])
    if(!vis[child])
    dfs(child);
}
int cnt1=-1;
int dist[50001];
set<int>st;
void dfs1(int node,int x,int sz)
{
  vis[node]=1;
  st.insert(node);
  cnt1++;
  dist[st.size()]=cnt1;
   if(st.size()==sz)return;
    for(int child:adj[node])
        if(!vis[child])
        dfs1(child,x,sz);
        if(st.size()<sz)cnt1++;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int t;
    cin>>t;
    for(int tc=1;tc<=t;tc++){

        for(int i=0;i<maxN;i++)
        {
            adj[i].clear();
            vis[i]=0;
            if(i<=50000)dist[i]=0;
        }
    int n,m,a,b;
    cin>>n>>m;
    for(int i=0;i<m;i++)
    {
        cin>>a>>b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    priority_queue<pair<int,int>>pq;

    for(int i=1;i<=n;i++)
    {
        if(!vis[i])
        {
            cnt=0;
            f=true;
            dfs(i);
            pq.push({cnt,x});
        }
    }

    int node=pq.top().second;
    int size=pq.top().first;
    memset(vis,0,sizeof(vis));

    dfs1(node,node,size);
    int k,q;
    cin>>q;
    cout<<"Case "<<tc<<":\n";
    while(q--)
    {
     cin>>k;
     if(k>size)cout<<"impossible"<<"\n";
     else
     cout<<dist[k]<<"\n";
    }
    st.clear();
    cnt1=-1;
    }
}
