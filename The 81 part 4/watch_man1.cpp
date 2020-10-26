#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);

    ll n,a,b;
    cin>>n;
    map<ll,ll>mp1,mp2;
    map<pair<ll,ll>,ll>mp;


    for(int i=0;i<n;i++)
    {
        cin>>a>>b;
        mp[{a,b}]++;
        mp1[a]++;
        mp2[b]++;
    }
    ll ans=0;
    for(auto x:mp1)
    {
        if(x.second>1)
        {
            ll r=x.second;
            ans+=(r*(r-1))/2;
        }
    }
    for(auto x:mp2)
    {
        if(x.second>1)
        {
            ll r=x.second;
            ans+=(r*(r-1))/2;
        }
    }
    for(auto x:mp){
    {
        if(x.second>1)
        {
            ll r=x.second;
            ans-=(r*(r-1))/2;
        }
    }
    }


    cout<<ans<<"\n";
}
