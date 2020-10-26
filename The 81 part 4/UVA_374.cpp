#include<bits/stdc++.h>
#define ll long long int
using namespace std;

ll bigmod(ll b,ll p,ll m)
{
ll ret;
    if(p==0)
        return 1;
    else if(p%2==0){
            ret= bigmod(b,p/2,m);
        return ((ret%m)*(ret%m))%m;
    }
     else
        return ((b%m)*bigmod(b,p-1,m))%m;

}
int main()
{
    ll b,p,n,r;

    while(scanf("%lld %lld %lld",&b,&p,&n)!=-1)
    {
      r=bigmod(b,p,n);
      cout<<r<<endl;
    }
}
