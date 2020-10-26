#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin>>t;
    while(t--){
    string s;
    cin>>s;

    map<char,int>mp;
    int j=0,mn=INT_MAX;
    for(int i=0;i<s.size();i++)
    {
        mp[s[i]]++;
        if(mp.size()==3)
        {
            while(mp.size()==3&&j<s.size())
            {

                mn=min(mn,i-j+1);
                mp[s[j]]--;
                if(mp[s[j]]==0)
                    mp.erase(s[j]);
                j++;
            }
        }
    }
    if(mn==INT_MAX)
        cout<<0<<"\n";
    else
        cout<<mn<<"\n";
    }
}
