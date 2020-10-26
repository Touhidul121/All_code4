#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,a,s;
        cin>>n>>s;
        vector<ll>v,pref(n+1);
        for(int i=0;i<n;i++)
        {
            cin>>a;
            v.push_back(a);

                pref[i+1]=pref[i]+a;
        }


        if(pref[n]<=s)
            cout<<0<<"\n";
        else
        {
            int d_ind,mx=0,ans=0;
            vector<pair<ll,ll>>v1;

            for(int i=0;i<n;i++)
            {
                if(pref[i+1]-v[i]<=s)
                {
                    d_ind=upper_bound(pref.begin(),pref.end(),s+v[i])-pref.begin()-1;
                    //cout<<d_ind<<"\n";
                    if(mx<d_ind)
                    {
                        mx=d_ind;
                        ans=i+1;
                    }
                }
            }
            cout<<ans<<"\n";
        }
    }
}
