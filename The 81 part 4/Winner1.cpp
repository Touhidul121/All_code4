#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n,x;
    cin>>n;
    string s;
    map<string,int>mp,mp1;
    vector<pair<string,int>>v;
    for(int i=0;i<n;i++)
    {
        cin>>s>>x;
        v.push_back({s,x});
        mp[s]+=x;
    }
    int max_score=INT_MIN;
    for(auto x:mp)
    {
        max_score=max(max_score,x.second);
    }

    for(auto x:v)
    {
        mp1[x.first]+=x.second;
        if(mp1[x.first]>=max_score && mp[x.first]==max_score)
        {
            cout<<x.first<<"\n";return 0;
        }
    }
}
