#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

ll f(ll n)
{
    return n*(n-1)/2;
}
int main()
{
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
    ll cnt=0,ans=0;
    for(auto x:mp1)
    {
     if(x.second>1)
     {
         ans+=f(x.second);
         cnt+=x.second;
     }
    }

    for(auto x:mp2)
    {
        if(x.second>1)
        {
            ans+=f(x.second);
            cnt+=x.second;
        }
    }
    for(auto x:mp)
    {
        if(x.second>1)
        {
          ans-=f(x.second);
        }
    }

    cout<<ans<<"\n";
}
