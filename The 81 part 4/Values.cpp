#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int maxN = 2e5+1;
ll n,m,sum1=0,sum2=0,u,v;
vector<ll>adj[maxN];
ll vis[maxN];
ll a[maxN];
ll b[maxN];

void dfs(int node)
{
    vis[node]=1;
    sum1+=a[node];
    sum2+=b[node];

    for(int child:adj[node])
        if(!vis[child])dfs(child);
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);

    cin>>n>>m;
    for(int i=1;i<=n;i++)
        cin>>a[i];

    for(int i=1;i<=n;i++)
        cin>>b[i];


    for(int i=0;i<m;i++)
    {
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    bool f=true;
    for(int i=1;i<=n;i++)
    {
        if(vis[i]==0)
        {
            sum1=0,sum2=0;
            dfs(i);
            if(sum1!=sum2)
            {
                f=false;break;
            }
        }
    }
    if(!f)cout<<"No"<<"\n";
    else cout<<"Yes"<<"\n";
}
