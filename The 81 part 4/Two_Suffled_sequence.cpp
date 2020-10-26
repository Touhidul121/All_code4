#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,a;
    cin>>n;
    vector<int>v,v1,v2;
    map<int,int>mp;
    bool f=false;
    for(int i=0;i<n;i++)
        cin>>a, v.push_back(a), mp[a]++;

    for(auto it=mp.begin();it!=mp.end();it++)
    {
        if(it->second>2)
        {
            f=true;break;
        }
    }
    if(f)
        cout<<"NO"<<"\n";
    else
    {
        cout<<"YES"<<"\n";

        sort(v.begin(),v.end());

        for(int i=0;i<n-1;i++)
        {
            if(v[i]==v[i+1])
            {
                v1.push_back(v[i]);
                v2.push_back(v[i+1]);
                i++;
            }
            else
                v1.push_back(v[i]);
        }
        cout<<v1.size()<<"\n";
        for(int x:v1)
            cout<<x<<" ";
        cout<<"\n";
        if(v1.size()+v2.size()<n)
            v2.push_back(v.back());
        reverse(v2.begin(),v2.end());
        cout<<v2.size()<<"\n";
        for(int x:v2)
            cout<<x<<" ";
        cout<<"\n";

    }
}
