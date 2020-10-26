#include<bits/stdc++.h>
#define ll long long int

using namespace std;

//vector<int>v(200005);
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n,a,count=0,flag=0,dist=0;
        cin>>n;
        map<int,int>mp;
        vector<int>v;
        for(int i=0;i<n;i++)
        {
            cin>>a;

          v.push_back(a);
            mp[a]++;

        }


        ll max1=0;
        for(auto x:mp)
        {
            if(max1<x.second){
                max1=x.second;
                dist=x.first;
            }
        }


        for(auto x:mp)
        {
            if(x.first==dist)
                continue;
            else
                count++;
        }

        ll ans=min(max1,count);
        ll diff;
        if(max1-1>count)
        {

            ans+=1;
        }
        cout<<ans<<endl;

    }
}
