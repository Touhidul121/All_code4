#include<bits/stdc++.h>
#define mod 1000000007
using namespace std;
typedef long long ll;
ll power(ll a,ll n)
{
    ll res=1;
    while(n)
    {
        if(n&1)
            res=(res*a)%mod , n--;
        n=n/2;
        a=(a*a)%mod;
    }
    return res;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    ll n,ans=0;
    cin>>n;
      for(ll i=1;i<=n;i++)
      {
          ll r=(n%mod*i%mod)%mod;
          r=(r%mod*power(n,mod-2))%mod;
          ans+=((n%mod*power(i,mod-2))%mod*((r%mod*(r+1)%mod*power(2,mod-2))%mod-(i%mod*(i-1)%mod*power(2,mod-2))%mod)%mod)%mod;
          i=r;
      }

    cout<<ans<<"\n";
}
