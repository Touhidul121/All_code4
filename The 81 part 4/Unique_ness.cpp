#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll n,count=0;
    cin>>n;
    ll a[n];
    map<ll,ll>mp;
    for(ll i=0;i<n;i++){
        cin>>a[i];
        mp[a[i]]=mp[a[i]]+1;
    }
    for(auto x:mp)
    {
        if(x.second>1)
            count=count+(x.second-1);
    }
    cout<<count<<endl;
}
