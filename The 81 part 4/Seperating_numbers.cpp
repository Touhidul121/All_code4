#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int par[300001];

map<ll,ll>mp[300001];
ll ar[300001];

vector<pair<int,int>>edgelist;

vector<int>operations;

int find(int a)
{
    if(a==par[a])return a;
    return par[a]=find(par[a]);
}
ll merge(int a,int b)
{
    ll res=0;

    if(mp[a].size()<mp[b].size())
    {
        swap(a,b);
    }

    for(pair<int,int> p:mp[b])
    {
        if(mp[a].find(p.first)==mp[a].end())
            mp[a][p.first]=p.second;
        else
            res+=mp[a][p.first]*p.second, mp[a][p.first]+=p.second;
    }
    par[b]=a;
    return res;
}
int main()
{

    int n,a,b;
    cin>>n;
    for(int i=0;i<=n;i++)
    {
    mp[i].clear();
    }
    for(int i=1;i<=n;i++)par[i]=i;

    for(int i=1;i<=n-1;i++)
    {
        cin>>a>>b;
        edgelist.push_back({a,b});

    }

    for(int i=1;i<=n;i++)
    {
        cin>>ar[i];
        mp[i][ar[i]]=1;
    }

    for(int i=1;i<=n-1;i++)
    {
        cin>>a;
        operations.push_back(a);
    }
    ll res=0;
    vector<int>ans;

    while(operations.size()>0)
    {
        int idx=operations.back();
        operations.pop_back();

        a=edgelist[idx-1].first;
        b=edgelist[idx-1].second;

        ans.push_back(merge(find(a),find(b)));
    }

    while(ans.size()>0)
        cout<<ans.back()<<"\n", ans.pop_back();

}
