#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);

    int t;
    cin>>t;
    while(t--)
    {
        int n,ans=0,a;
        cin>>n;
        vector<int>v(n+5),pref(n+5);
        map<int,int>mp;
        for(int i=1;i<=n;i++)
        {
            cin>>a;
            v[i]=a;
            mp[a]++;
        }cout<<mp[3]<<"\n";
        for(int i=1;i<=n;i++)
            pref[i]=v[i]+pref[i-1];

        for(int i=1;i<=n-1;i++)
        {
            for(int j=i+1;j<=n;j++)
            {
                if(mp.find(pref[j]-pref[i-1])!=mp.end())
                {
                    cout<<mp[pref[j]-pref[i-1]]<<"\n";
                    ans+=mp[pref[j]-pref[i-1]];
                    mp.erase(pref[j]-pref[i-1]);
                }
            }
        }
        cout<<ans<<"\n";
    }
}
