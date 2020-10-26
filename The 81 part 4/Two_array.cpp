#include<bits/stdc++.h>
using namespace std;

#define mod 1000000007

typedef long long ll;
ll power(ll a,ll n)
{
    ll res=1;
    while(n)
    {
        if(n&1)
        {
            res=(res*a)%mod;
        }

        n>>=1;
        a=(a*a)%mod;

    }
    return res;
}
ll fact(ll n)
{
    ll ans=1;
    for(ll i=1;i<=n;i++)
        {
        ans=(ans*i)%mod;
        }
        return ans%mod;
}
int main()
{
    ll n,m,x,y;
    cin>>n>>m;
    x=n+2*m-1;
    y=2*m;
    ll res=fact(x)*power(fact(x-y),mod-2)%mod;
    res=(res*power(fact(y),mod-2))%mod;
    cout<<res<<"\n";


}

