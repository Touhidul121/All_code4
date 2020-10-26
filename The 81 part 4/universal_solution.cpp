#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);

    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        map<char,int>mp;
        for(int i=0;i<s.size();i++)
            mp[s[i]]++;

        if(max(mp['R'],max(mp['P'],mp['S']))==mp['R'])
            cout<<string(s.size(),'P')<<"\n";
        else if(max(mp['R'],max(mp['P'],mp['S']))==mp['P'])
            cout<<string(s.size(),'S')<<"\n";
        else if(max(mp['R'],max(mp['P'],mp['S']))==mp['S'])
            cout<<string(s.size(),'R')<<"\n";
    }
}
