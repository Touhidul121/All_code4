#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

const ll INF =1e15;
const ll REF =1e16;
ll dp[10001][1001];
ll ar[10001];
ll n,K,M;
ll getmax(int pos,int k)
{
    if(k==K+1)return 0;
    if(pos>n)return 0;

    if(dp[pos][k]!=REF)return dp[pos][k];

    ll x=ar[pos]*(k%M)+getmax(pos+1,k+1);
    ll y=getmax(pos+1,k);

    return dp[pos][k]=max(x,y);
}
int main()
{
    cin>>n>>K>>M;

    for(int i=1;i<=n;i++)
    {
     cin>>ar[i];
    }

    for(int i=0;i<=10000;i++)
    {
        for(int j=0;j<=1000;j++)
        {
            dp[i][j]=REF;
        }
    }
    cout<<getmax(1,1)<<"\n";
}
