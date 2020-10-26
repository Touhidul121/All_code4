#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);

    int t;
    cin>>t;
    while(t--){
    int n;
    cin>>n;
    string s;
    cin>>s;
    int x=0,y=0,l=-1,r=n;
    map<pair<int,int>,int>mp;
    mp[{0,0}]=0;

    int mx=0,diff=0;

    for(int i=0;i<n;i++)
    {
        if(s[i]=='L')x--;
        else if(s[i]=='R')x++;
        else if(s[i]=='U')y++;
        else y--;

        if(mp.count({x,y}))
            {

                if(i-mp[{x,y}]+1<r-l+1)
                {
                    l=mp[{x,y}];
                    r=i;
                }
            }
        mp[{x,y}]=i+1;
    }
    if(l==-1)cout<<-1<<"\n";
    else cout<<l+1<<" "<<r+1<<"\n";
    }
}

