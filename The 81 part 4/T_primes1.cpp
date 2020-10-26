#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

bool isPerfectsquare(ll x)
{
    ll a=sqrt(x);
    return a*a==x;
}
bool isprime(ll n)
{
    if(n==1)
        return false;
    for(ll i=2;i*i<=n;i++)
    {
        if(n%i==0)
            return false;
    }
    return true;
}
int main()
{
    int n;
    ll a;
    cin>>n;

    for(int i=0;i<n;i++)
    {
        cin>>a;
        ll x=sqrt(a);
        if(isPerfectsquare(a) && isprime(x))
        {
          cout<<"YES"<<"\n";
        }
        else
            cout<<"NO"<<"\n";
    }
}
