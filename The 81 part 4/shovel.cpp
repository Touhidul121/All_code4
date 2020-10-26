#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin>>t;
    while(t--)
    {
     ll n,k;
     cin>>n>>k;
     vector<ll>v1;
     for(int i=1;i<=sqrt(n);i++)
     {
      if(n%i==0)
      {
          if(i==n/i)
          v1.push_back(i);
          else
          {
              v1.push_back(i);
              v1.push_back(n/i);
          }
      }
     }
     ll ans=0;
     sort(v1.begin(),v1.end());
     for(int i=v1.size()-1;i>=0;i--)
     {
         if(n%v1[i]==0&&v1[i]<=k)
         {
             ans=n/v1[i];
             break;
         }
     }
     cout<<ans<<"\n";
    }
}
