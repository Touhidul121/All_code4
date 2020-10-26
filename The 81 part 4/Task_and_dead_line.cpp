#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin>>n;
    vector<pair<int,int>>v(n);
    for(int i=0;i<n;i++)
        cin>>v[i].first>>v[i].second;
    sort(v.begin(),v.end());
    int ans=0,t=0;

    for(int i=0;i<n;i++)
    {
        t+=v[i].first;
        ans+=v[i].second-t;
    }
    cout<<ans<<"\n";
}
