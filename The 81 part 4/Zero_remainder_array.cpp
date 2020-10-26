#include<bits/stdc++.h>
using namespace std;

typedef  long long int ull;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ull n,k,a,cnt=0;
        cin>>n>>k;

        map<ull,ull>mp;
        for(int i=0;i<n;i++)
        {
            cin>>a;

            mp[a%k]++;
        }
        ull res=0;
        for(auto x:mp)
        {
            if(x.first==0)
                continue;
          res=max(res,(x.second-1)*k+(k-x.first)+1);
        }
        if(res==0)
            cout<<0<<"\n";
        else
        cout<<res<<"\n";

    }
}
