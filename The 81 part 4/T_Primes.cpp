#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

bool isPerfectsquare(ll n)
{
    ll x=sqrt(n);
    return x*x==n;
}

bool isPrime( ll n)
{
    if(n==1)
        return false;
    for(int i=2;i*i<=n;i++)
    {
        if(n%i==0)
            return false;
    }
    return true;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n,x;
        cin>>n;

        if(isPerfectsquare(n))
        {
           x=sqrt(n);

           if(isPrime(x))
            cout<<"YES"<<"\n";
           else
            cout<<"NO"<<"\n";
        }
        else

            cout<<"NO"<<"\n";
    }
}
