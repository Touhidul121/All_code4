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
       ll n,a;
       cin>>n;
       vector<ll>v,v1,v2;
       for(int i=0;i<n;i++)
       {
           cin>>a;
           v.push_back(a);

       }
       sort(v.begin(),v.end());

       ll cnt1=0,cnt2=0;
       for(int i=0;i<n-1;i++)
       {
        for(int j=i+1;j<n;j++)
        {
            if(v[i]!=-1&&v[j]!=-1){
          if(v[i]%2==v[j]%2)
          {
            v[i]=-1;
            v[j]=-1;
            break;
          }
          else if((abs(v[i]-v[j])==1))
          {
              v[i]=-1;
              v[j]=-1;
              break;
          }
        }}
       }
       int cnt=count(v.begin(),v.end(),-1);

       if(cnt==n)
        cout<<"YES"<<"\n";
       else
        cout<<"NO"<<"\n";


   }
}
