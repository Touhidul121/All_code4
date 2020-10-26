#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const long long INF=1e15;
#define pii pair<ll,ll>

vector<pii>adj[100001];
vector<ll>dist(100001,INF);

void dijktra(int src)
{
    priority_queue<pii,vector<pii>,greater<pii>>pq;
    pq.push({0,src});
    dist[src]=0;

    while(!pq.empty())
    {
        ll current_node=pq.top().second;
        ll current_distance=pq.top().first;
        pq.pop();

        if(current_distance>dist[current_node])
            continue;

        for(auto x:adj[current_node])
        {
            ll u=current_node;
            ll v=x.first;
            ll cost=x.second;
            if(dist[u]+cost<dist[v])
            {
                dist[v]=dist[u]+cost;
                pq.push({dist[v],v});
            }
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);

    ll n,m,a,b,w;
    cin>>n>>m;

    for(int i=1;i<=m;i++)
    {
        cin>>a>>b>>w;
        adj[a].push_back({b,w});
    }

    dijktra(1);

    for(int i=1;i<=n;i++)
        cout<<dist[i]<<" ";
    cout<<"\n";
}
