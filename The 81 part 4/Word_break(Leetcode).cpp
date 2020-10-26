#include<bits/stdc++.h>
using namespace std;
map<string,int>mp;
map<string,int>dp; // memoization using map

bool isPresent(string s)
{
    if(mp.find(s)!=mp.end())return true;
    else
        return false;
}
bool solve(string s)
{
    if(s.size()==0)return true;
     if(dp.find(s)!=dp.end())return dp[s];
    for(int i=1;i<=s.size();i++)
    {
        if(isPresent(s.substr(0,i))&&solve(s.substr(i,s.size()-i)))
            return dp[s]=true;
    }
    return dp[s]=false;
}
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

    string s;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)cin>>s , mp[s]++;
    string word;
    cin>>word;
    if(solve(word))
        cout<<"YES"<<"\n";
    else
        cout<<"NO"<<"\n";

}
