#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
    string a;
    cin>>a;
    map<char,int>mp;
    int min_loc,max_loc,ans=INT_MAX;
    for(int i=0;i<a.size();i++)
    {
        mp[a[i]]=i;
        if(mp.size()==3)
        {
            min_loc=min(mp['1'],min(mp['2'],mp['3']));
            max_loc=max(mp['1'],max(mp['2'],mp['3']));
            ans=min(ans,max_loc-min_loc+1);
        }
    }
    if(ans==INT_MAX)
        cout<<0<<"\n";
    else
    {
        cout<<ans<<"\n";
    }
    }
}

