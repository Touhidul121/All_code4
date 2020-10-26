#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    ll n,x;
    cin>>n>>x;
    ll arr[n];
    for(int i=0;i<n;i++)cin>>arr[i];

    map<ll,pair<int,int>>mp;
    for(int i=0;i<n-1;i++)
        for(int j=i+1;j<n;j++)
    mp[arr[i]+arr[j]]={i,j};

    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            ll sum=arr[i]+arr[j];
            if(mp.find(x-sum)!=mp.end())
            {
                pair<int,int>p=mp[x-sum];
                if(p.first!=i && p.first!=j && p.second!=i && p.second!=j)
                {
                    cout<<i+1<<" "<<j+1<<" "<<p.first+1<<" "<<p.second+1<<"\n";
                    return 0;
                }
            }
        }
    }
    cout<<"IMPOSSIBLE"<<"\n";
}
