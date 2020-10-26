#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
int main()
{
 ll n,a,sum=0;
 cin>>n;

 vector<ll>v;

 for(ll i=0;i<n;i++)
 {
     cin>>a;
     v.push_back(a);
     sum+=a;
 }

 ll x=*max_element(v.begin(),v.end());

 ll sum1=sum-x;

 if(sum&1||x>sum1)
    cout<<"NO"<<"\n";
 else
    cout<<"YES"<<"\n";

}
