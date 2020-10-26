#include<bits/stdc++.h>
using namespace std;

int n;
map<string,int>mp;
void solve(string s,int pos,string ans)
{
  if(pos==s.size())
  {
      if(mp[ans]==0){
      cout<<ans<<" ";
      mp[ans]++;
      }
      return;
  }
  solve(s,pos+1,ans+s[pos]);
  solve(s,pos+1,ans);
}
int main()
{

    string s;
    cin>>s;
    n=s.size();
    cout<<" ";
    solve(s,0,"");
}
