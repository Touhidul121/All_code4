#include<bits/stdc++.h>
using namespace std;
const int maxN = 2e5;
typedef long long ll;
ll a[maxN];
int main()
{
 ios_base::sync_with_stdio(false);
 cin.tie(0);

 int n;
 ll s=0,ans=0;
 cin>>n;
 map<ll,int>mp;
 mp[0]++;
 for(int i=0;i<n;i++){
        cin>>a[i];


     s=(s+a[i]%n+n)%n;

     ans+=mp[s];
     mp[s]++;
 }
 cout<<ans<<"\n";
}
