#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll n,m,a;
    cin>>n>>m;
    vector<int>coins;

    for(ll i=0;i<m;i++)
        cin>>a , coins.push_back(a);
    ll dp[n+1];
    memset(dp,0,sizeof(dp));
    dp[0]=1;

    for(ll i=0;i<m;i++)
    {
        for(ll j=coins[i];j<=n;j++)
        {

                dp[j]=dp[j]+dp[j-coins[i]];

        }
    }
    cout<<dp[n]<<"\n";
}
