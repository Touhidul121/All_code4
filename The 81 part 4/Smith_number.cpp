#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

ll get_sum_of_digits(ll n)
{
    ll sum=0;
    while(n>0)
    {
        sum+=n%10;
        n/=10;
    }
    return sum;
}
int main()
{

        ll n,x,r,cnt=0;
        cin>>n;
        x=n;
        map<ll,ll>mp;
        for(int i=2;i*i<=n;i++)
        {
            while(n%i==0)
            {
                cnt++;
                n/=i;
            }
            mp[i]=cnt;
            cnt=0;
        }
        if(n>1)
            mp[n]++;
        ll ans=0;
        x=get_sum_of_digits(x);
        for(auto x:mp)
        {
         r=get_sum_of_digits(x.first);
         ans+=r*x.second;
        }
        if(ans==x)
            cout<<1<<"\n";
        else
            cout<<0<<"\n";

}
