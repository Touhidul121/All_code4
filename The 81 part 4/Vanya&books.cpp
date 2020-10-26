#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll n;
    cin>>n;
    ll x=n,m=0;
    while(x)
    {
        x=x/10;
        m++;
    }

    ll ans=m*(n+1),k=1;

    for(int i=1;i<=m-1;i++)
    {
        k=k*10;
        ans-=k;

    }

    cout<<(ll)(ans-1)<<endl;
}
