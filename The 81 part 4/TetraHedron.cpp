#include<bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define N (int)1e7+2
int dp[2][N];
int vis[2][N];
int getans(int src,int steps)
{
    if(steps==0)
    {
        if(src==1)return 1;
        else return 0;
    }

    if(vis[src][steps]==1)return dp[src][steps];
    static int ans=dp[src][steps];
    vis[src][steps]=1;

     if(src==1)
        ans=(3*getans(0,steps-1))%mod;
     else
        {
            ans=(2*getans(0,steps-1))%mod+getans(1,steps-1)%mod;
        }


}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin>>n;
    memset(dp,-1,sizeof(dp));

    cout<<getans(1,n)<<"\n";
}
