//Floyd Warshall(all pairs shortest path)

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const long long INF = 1e15;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);

    ll n,m,q,a,b,w;
    cin>>n>>m>>q;
    ll d[n+1][n+1];

    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(i==j)d[i][j]=0;
            else d[i][j]=INF;
        }
    }

    while(m--)
    {
        cin>>a>>b>>w;
        d[a][b]=min(d[a][b],w);
        d[b][a]=min(d[b][a],w);
    }

    for(int k=1;k<=n;k++)
    {
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=n;j++)
            {
                if(i!=k && j!=k)
                {
                    d[i][j]=min(d[i][j],d[i][k]+d[k][j]);
                }
            }
        }
    }

    while(q--)
    {
        cin>>a>>b;
        if(d[a][b]==INF)
            cout<<-1<<"\n";
        else
            cout<<d[a][b]<<"\n";
    }
}
