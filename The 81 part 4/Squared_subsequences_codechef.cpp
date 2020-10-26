#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--)
    {
        ll n,a;
        cin>>n;
        vector<ll>v,zero,two;
        for(int i=0;i<n;i++)
        {
            cin>>a;
            a=abs(a);
            v.push_back(a%4);
        }
        ll res=0,cnt=0;

        for(ll i=0;i<n;i++)
        {
        if(v[i]==0)
        {
            res+=(i+1);
            res+=(cnt*(cnt+1))/2;
            two.push_back(i+1);
            cnt=0;
        }
        else if(v[i]==1)
        {
            cnt++;
            ll pos=0;
            if(two.size()>1)
            {
                pos=two[two.size()-2];
            }

            res+=pos;
        }
        else if(v[i]==2)
        {
            res+=(cnt*(cnt+1))/2;
            cnt=0;
            ll pos=0;
            if(two.size()>0)
                pos=two.back();
                res+=pos;
                two.push_back(i+1);
        }
        else
        {
            cnt++;
            ll pos=0;
            if(two.size()>1)
            {
                pos=two[two.size()-2];
            }

            res+=pos;
        }
        }
        if(cnt>0)
            res+=(cnt*(cnt+1))/2;
        cout<<res<<"\n";
    }

}
