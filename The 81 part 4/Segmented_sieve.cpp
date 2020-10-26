#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
bool prime[100007];
ll primes[100000];
void sieve(ll n)
{

    for(ll i=4;i<=n;i+=2)
        prime[i]=true;
    for(ll i=3;i*i<=n;i+=2)
    {
        for(ll j=i*i;j<=n;j+=i)
            prime[j]=true;
    }
    ll k=0;
    for(ll i=2;i<=n;i++)
        if(prime[i]==false)
        {
            primes[k++]=i;
        }

}
void ans(ll l,ll r)
{
    if(l==1)
        l++;
    ll mx=r-l+1;
    vector<ll>v(mx,0);

    for(ll x:primes)
    {
        if(x*x<=r)
        {
            int i=(l/x)*x;
            if(i<l)i+=x;
            for(;i<=r;i+=x)
            {
                if(i!=x)
                    v[i-l]=1;
            }
        }
        else
            break;
    }
    for(ll i=0;i<mx;i++)
    {
     if(v[i]==0)
            cout<<l+i<<"\n";
    }

}
int main()
{
    sieve(100000);
    int t;
    cin>>t;
    while(t--)
    {
        ll l,r;
        cin>>l>>r;
        ans(l,r);

    }
}
