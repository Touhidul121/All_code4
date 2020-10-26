#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define mod (ll)1000000007


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
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

    ll n;
    cin>>n;

    if(n==1)cout<<0<<"\n";

    else
    {
        ll ans=power(10,n);
        ans=(ans-power(9,n))%mod;
        if(ans<0)ans+=mod;
        ans=(ans-power(9,n))%mod;
        if(ans<0)ans+=mod;
        ans=(ans+power(8,n))%mod;
        cout<<ans<<"\n";
    }
}
