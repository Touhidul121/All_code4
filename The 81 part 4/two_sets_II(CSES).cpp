#include<bits/stdc++.h>
using namespace std;
#define mod 1000000007
typedef long long ll;
long long power(ll a,ll n)
{
   ll res=1;
   while(n)
   {
       if(n&1)
        res=(res*a)%mod;
       n=n/2;
       a=(a*a)%mod;
   }
   return res;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);

    int n;
    cin>>n;
    int arr[n+1];
    for(int i=0;i<n;i++)
        arr[i]=i+1;
    if(n<=2)cout<<0<<"\n";
    else{
    int m=(n*(n+1))/2;
    if(m&1)cout<<0<<"\n";
    else{m=m/2;

    int dp[n+1][m+1];
    for(int i=0;i<=n;i++)dp[i][0]=1;
    for(int i=1;i<=m;i++)dp[0][i]=0;

    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
           if(arr[i-1]<=j)
                dp[i][j]=(dp[i-1][j]+dp[i-1][j-arr[i-1]])%mod;
           else
            dp[i][j]=dp[i-1][j];
        }
    }

    cout<<(dp[n][m]*power(2,mod-2))%mod<<"\n";
    }
    }

}

