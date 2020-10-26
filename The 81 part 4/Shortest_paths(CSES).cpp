#include<bits/stdc++.h>


using namespace std;
#define maxN 100001




const int INF = 1000000000;
vector<pair<int,int>> adj[maxN];

void dijkstra(int s, vector<int> & d) {
    int n =maxN;


    d[s] = 0;
    using pii = pair<int, int>;
    priority_queue<pii, vector<pii>, greater<pii>> q;
    q.push({0, s});
    while (!q.empty()) {
        int v = q.top().second;
        int d_v = q.top().first;
        q.pop();
        if (d_v != d[v])
            continue;

        for (auto edge : adj[v]) {
            int to = edge.first;
            int len = edge.second;

            if (d[v] + len < d[to]) {
                d[to] = d[v] + len;

                q.push({d[to], to});
            }
        }
    }
}

int main()
{

    int n,m;

    cin>>n>>m;

    int u,v,w;
    vector<int>dist(maxN,INF);
    for(int i=0;i<m;i++)
    {
        cin>>u>>v>>w;
        u--,v--;

        adj[u].push_back(make_pair(v,w));
        //adj[v].push_back(make_pair(u,w));

    }
    dijkstra(0,dist);

    for(int i=0;i<n;i++)
        cout<<dist[i]<<" ";
}


