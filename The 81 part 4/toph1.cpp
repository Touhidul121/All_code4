#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
vector<ll>b(10000007);
vector<ll>v;
void sieve(ll n)
{
    for(ll i=4;i<=n;i+=2)
        b[i]=1;
    for(ll i=3;i*i<=n;i+=2)
    {
        if(b[i]==0){
        for(ll j=i*i;j<=n;j+=i)
        {
            b[j]=1;
        }
        }
    }

    for(ll i=2;i<=n;i++)
    {
        if(b[i]==0){
                //cout<<i<<" ";
            v.push_back(i);
        }
    }
}
int main()
{
 ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 sieve(10000007);
 ll n;
 cin>>n;
 cout<<v[n-1]<<"\n";
}
