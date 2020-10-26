#include<bits/stdc++.h>
#define INF (ll)100000000000
using namespace std;
typedef long long ll;
vector<pair<ll,ll>>adj[1000001];

int main()
{
    ll n,m,a,b,w;
    cin>>n>>m;
    while(m--)
    {
        cin>>a>>b>>w;
        adj[a].push_back({b,w});
        //adj[b].push_back({a,w});
    }

    priority_queue<pair<ll,ll>, vector<pair<ll,ll>>, greater<pair<ll,ll>>>pq;
    vector<ll>dist(1000000,INF);
    pq.push({0,1});
    dist[1]=0;

    while(!pq.empty())
    {
        ll cur=pq.top().second;
        ll cur_d=pq.top().first;
        pq.pop();
         if(cur_d>dist[cur])
         continue;
        for(pair<ll,ll>edge:adj[cur])
        {

            if(cur_d+edge.second<dist[edge.first])
            {
                dist[edge.first]=cur_d+edge.second;
                pq.push({dist[edge.first],edge.first});
            }
        }
    }

    for(ll i=1;i<=n;i++)
        cout<<dist[i]<<" ";
}

