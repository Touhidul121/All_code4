#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

ll fact(ll n)
{
    if(n==0)return 1ll;

    else
    {
        ll res=1;
        for(ll i=1;i<=n;i++)
            res*=i;
        return res;
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);

    ll n;
    cin>>n;

    ll ans=fact(n-1)/(n/2);
    cout<<ans<<"\n";
}
