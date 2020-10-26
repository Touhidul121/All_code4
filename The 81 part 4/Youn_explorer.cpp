#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
int main()
{
    ll t;
    cin>>t;
    while(t--){
 ll n,a;
 cin>>n;
 vector<ll>v;

 for(int i=0;i<n;i++)
 {
     cin>>a;
     v.push_back(a);
 }

 sort(v.begin(),v.end());

 ll count=0,team=0;
 for(int i=0;i<n;i++)
 {
     count++;
     if(count==v[i])
     {
    team++;
    count=0;
     }



 }
 cout<<team<<"\n";
    }
}
