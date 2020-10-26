#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);

    ll n;
    cin>>n;
    ll n1=n;
    ll ans=0;
    vector<ll>v;
    for(ll i=2;i*i<=n;i++)
    {
        if(n%i==0)
        {
            while(n%i==0)
            {
                n=n/i;
            }
            v.push_back(i);
        }
    }
    if(n>1)v.push_back(n);

    if(v.size()==1)cout<<v.back()<<"\n";
    else cout<<1<<"\n";
}
