#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,a;
    cin>>n;
    map<int,int>mp;
    for(int i=0;i<n;i++)
    {
        cin>>a;
        mp[a]++;
    }
    bool f=false;
    for(auto x:mp)
    {
        if(x.second &1)
        {
            f=true;break;
        }
    }
    if(f && mp.size()>1)cout<<"NO"<<"\n";
    else cout<<"YES"<<"\n";
}
