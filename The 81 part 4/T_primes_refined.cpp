#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
set<ll>st;

void sieve(ll maxN)
{
    vector<ll>v(maxN,0);
    v[0]=v[1]=1;

    for(ll i=2;i*i<=maxN;i++)
    {
        if(v[i]==0)
        {
            for(ll j=2*i;j<=maxN;j+=i)
                v[j]=1;
        }
    }
    for(ll i=1;i<=maxN;i++){
        if(v[i]==0)

        st.insert(i*i);
    }
}
int main()
{
   sieve(10000000);
   int n;
   cin>>n;
   while(n--)
   {
       ll x;
       cin>>x;
       if(st.find(x)!=st.end())
        cout<<"YES"<<"\n";
       else
        cout<<"NO"<<"\n";
   }
}
