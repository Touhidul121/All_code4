#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    map<string , int>mp,mp1;
    vector<pair<string,int>>v;
    string a;
    int b;
    for(int i=0;i<n;i++)
    {
        cin>>a>>b;

        mp[a]+=b;
        v.push_back(make_pair(a,b));
    }
    int mx=0;
    vector<int>v1;
    for(auto x:mp)
        {

         if(mx<x.second)
                mx=x.second;
        }

    for(int i=0;i<n;i++)
    {
        mp1[v[i].first]+=v[i].second;
        if(mp1[v[i].first]>=mx&&mp[v[i].first]==mx)
        {
            cout<<v[i].first<<"\n";
            return 0;
        }
    }
}
