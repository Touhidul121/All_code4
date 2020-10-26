#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
ll x=0,y=0;
ll getmin(ll n)
{
    vector<ll>v;
  while(n>0)
  {
      v.push_back(n%10);
      n/=10;
  }
  x=*min_element(v.begin(),v.end());
  y=*max_element(v.begin(),v.end());
  v.clear();
}
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,k;
        cin>>n>>k;
        ll ans=n;

        k--;
        while(k>0)
        {
            getmin(ans);
         if(x==0)
                break;
         else
            ans+=(x*y);
            k--;

        }
        cout<<ans<<"\n";
    }
}
