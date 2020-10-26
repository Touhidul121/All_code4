#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    ll n,k;
    cin>>n>>k;
    ll a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];

    map<ll,ll>mp;
    ll i=0,sum=0,cnt=0;
    while(i<n)
    {
        sum+=a[i];
        if(sum==k)
            cnt++;
        if(mp.find(sum-k)!=mp.end())
        {
            cnt+=mp[sum-k];
        }
        mp[sum]++;
        i++;
    }
    cout<<cnt<<"\n";
}

