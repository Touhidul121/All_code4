#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
int main()
{
  ll n,t,a;
 cin>>n>>t;
 vector<ll>pref(n+1);


 for(ll i=0;i<n;i++)
 {
     cin>>a;
     pref[i+1]=pref[i]+a;

 }



    int loc;

     if(binary_search(pref.begin(),pref.end(),t))
        loc=lower_bound(pref.begin(),pref.end(),t)-pref.begin();
     else
     loc=upper_bound(pref.begin(),pref.end(),t)-pref.begin()-1;

     cout<<loc<<"\n";


}

