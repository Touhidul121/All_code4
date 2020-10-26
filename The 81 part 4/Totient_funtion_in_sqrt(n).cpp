#include<bits/stdc++.h>
using namespace std;

void totient(int n)
{
    map<int,int>mp;
    int ans=n,cnt=0;
    for(int i=2;i*i<=n;i++)
    {
      if(n%i==0)
      {
          while(n%i==0)
          {
              cnt++;
              n/=i;
          }
          mp[i]=cnt;
          cnt=0;
      }
    }
    if(n>1)
        mp[n]++;
    for(auto x:mp)
    {
        ans*=(x.first-1);
    }
    for(auto x:mp)
        ans/=x.first;
    cout<<ans<<"\n";
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        totient(n);
    }
}
