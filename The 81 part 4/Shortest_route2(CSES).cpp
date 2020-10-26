#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define inf (ll)1e15
int main()
{
    ll n,m,q,a,b,c;
    cin>>n>>m>>q;
    ll d[n+1][n+1];
    map<pair<ll,ll>,ll>mp;

    //memset(d,100,sizeof(d));

    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
        if(i==j)d[i][j]=0;
        else
            d[i][j]=inf;
        }}
    while(m--)
    {
        cin>>a>>b>>c;

        d[a][b]=min(d[a][b],c);
        d[b][a]=min(d[b][a],c);

    }

    for(int k=1;k<=n;k++)
    {
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=n;j++)
            {
                if(i!=k && j!=k)
                d[i][j]=min(d[i][j],d[i][k]+d[k][j]);
            }
        }
    }

    while(q--)
    {
        cin>>a>>b;
        if(d[a][b]==inf)
            cout<<-1<<"\n";
        else
            cout<<d[a][b]<<"\n";
    }
}
