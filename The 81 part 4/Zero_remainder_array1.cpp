#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin>>t;
    while(t--)
    {
        ll n,k,a,r,p;
        cin>>n>>k;
        map<ll,ll>mp;
        for(int i=0;i<n;i++)
            cin>>a , mp[a%k]++;
        ll res=0;

        for(auto x:mp)
        {
            if(x.first==0)continue;
            else
            {

                r=k-x.first;
                p=(x.second-1);
                res=max(res,p*k+1+r);

            }
        }
        cout<<res<<"\n";

    }
}
