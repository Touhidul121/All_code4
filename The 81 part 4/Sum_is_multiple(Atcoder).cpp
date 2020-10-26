#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
bool isPerfectsquare(ll n)
{
    ll x=sqrt(n);
    return x*x==n;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);

    ll n,ans=0;
    cin>>n;
    if(n&1)
        ans=max(1ll,n-1);
    else
        ans=2ll*n-1;

    cout<<ans<<"\n";
}
