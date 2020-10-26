#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll n,count1=0;
    cin>>n;
    ll x,r,t;
    set<ll>s;
       ll a[1000];
       int sq=sqrt(1000);
    for(int i=4;i<=1000;i+=2)
    {
        a[i]=1;
    }
    for(int i=3;i<=sq;i+=2)
    {
        if(a[i]==0)
        {
            for(int j=i*i;j<=1000;j=j+i)
                a[i]=1;
        }
    }
    for(int i=2;i<=10000;i++)
    {
        if(a[i]==0)
            s.insert(i*i);
    }

    for(ll i=0;i<n;i++)
    {
        cin>>x;


        if(s.count(x))
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
            count1=0;
    }
}
