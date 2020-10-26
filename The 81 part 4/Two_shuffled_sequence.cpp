#include<bits/stdc++.h>
using namespace std;

int main()
{
  int n,a;
  cin>>n;
  vector<int>v;

  map<int,int>mp;
  for(int i=0;i<n;i++)
  {
      cin>>a;
      v.push_back(a);
     mp[a]++;
  }
  int mx=0;
  for(auto x:mp)
  {
      if(mx<x.second)
      {
          mx=x.second;
      }
  }
  if(mx==1)
  {
      cout<<"YES"<<"\n";
      cout<<0<<"\n";
      sort(v.rbegin(),v.rend());
      cout<<n<<"\n";
      for(int i=0;i<n;i++)
        cout<<v[i]<<" ";
        cout<<"\n";
  }
  else if(mx==2)
  {
      cout<<"YES"<<"\n";
      vector<int>v1,v2;
      sort(v.begin(),v.end());
      for(int i=0;i<n-1;i++)
      {
          if(v[i]==v[i+1])
          {
              v1.push_back(v[i]);
          }
          else
            v2.push_back(v[i]);
      }
      v2.push_back(v[n-1]);
      cout<<v1.size()<<"\n";
      for(int i=0;i<v1.size();i++)
        cout<<v1[i]<<" ";
      cout<<"\n";
      sort(v2.rbegin(),v2.rend());
      cout<<v2.size()<<"\n";
      for(int i=0;i<v2.size();i++)
        cout<<v2[i]<<" ";
      cout<<"\n";
  }
  else
    cout<<"NO"<<"\n";
}
