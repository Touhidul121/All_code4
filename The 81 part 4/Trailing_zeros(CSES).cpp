#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

ll power(ll a,ll n)
{
    ll res=1;
    while(n>0)
    {
        if(n&1)
            res=res*a , n--;
        n>>=1;
        a=a*a;
    }
    return res;
}

int main()
{
    ll n;
    cin>>n;
    ll cnt=0,i=1;
    while(n>0)
    {
        cnt+=(n/power(5,i));
        n=(n/power(5,i));
        i++;
    }
    cout<<cnt<<"\n";
}
