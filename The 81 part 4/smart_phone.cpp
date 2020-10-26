#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
int main()
{
    ll n;
    cin>>n;
    ll a;
    vector<ll>v;
    for(int i=0;i<n;i++)
    {
        cin>>a;
        v.push_back(a);
    }
    ll res=0;
    sort(v.begin(),v.end());
    if(n&1)
    {
        res=v[n/2];

        cout<<(ll)res*((n/2)+1)<<"\n";
    }
    else
    {
        res=v[n/2-1];
        cout<<(ll)res*(n/2+1)<<"\n";
    }
}
