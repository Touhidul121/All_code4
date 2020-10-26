#include<bits/stdc++.h>
typedef long long ll;

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
ll n,b,a;
cin>>n>>b;

vector<ll>v,v2;
vector<pair<ll,ll>>v1;
for(ll i=0;i<n;i++)
{
    cin>>a;
    v.push_back(a);
}

for(ll i=0;i<b;i++)
{
    ll c,d;
    cin>>c>>d;
    v1.push_back(make_pair(c,d));
}

sort(v1.begin(),v1.end());

vector<ll>pref1(b+1);


for(ll i=0;i<b;i++)
{
  pref1[i+1]=pref1[i]+v1[i].second;
}

ll x=0,y=0;
for(ll i=0;i<n;i++)
{
    if(v[i]<v1[0].first)
    {
        cout<<0<<" ";
        continue;
    }

    ll left= 0;
    ll right = b-1;
        while (left<right)
        {
            ll mid = (left+right+1) / 2;
            if (v[i] < v1[mid].first)
                right = mid - 1;
            else
                left = mid;
        }
        cout << pref1[left+1]<<" ";



}
cout<<"\n";
}
