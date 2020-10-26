#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
ll solve(ll r,ll lcm,ll b)
{
    ll div=r/lcm;
    ll prod=div*lcm;
    ll tot=r;
    if(div!=0)
    {
        tot-=min(b,r-prod+1);
        tot-=(div-1)*b;
    }
    return tot-min(r,(b-1));

}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll a,b,q,l,r;
        cin>>a>>b>>q;
        if(a>b)swap(a,b);
        ll lcm=(a*b)/__gcd(a,b);
        while(q--)
        {
            cin>>l>>r;
            if(r<b || b==lcm)
                cout<<0<<" ";
            else cout<<solve(r,lcm,b)-solve(l-1,lcm,b)<<" ";
        }
        cout<<"\n";
    }
}
