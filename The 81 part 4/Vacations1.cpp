#include<bits/stdc++.h>
using namespace std;
#define maxN 101
int dp[maxN][4];
vector<int>v;

int n;
int getans(int pos,int last)
{
    if(pos>=n)return 0;

    if(dp[pos][last]!=-1)return dp[pos][last];
    int ans=0;
    if(v[pos]==0)
        ans=1+getans(pos+1,0);

     else if(v[pos]==1)
    {
      if(last==1)
        ans=1+getans(pos+1,0);
      else
            ans=getans(pos+1,1);
    }
    else if(v[pos]==2)
    {
        if(last==2)
            ans=1+getans(pos+1,0);
        else
            ans=getans(pos+1,2);
    }
   else if(v[pos]==3){
            int a,b; // present state hoy 1(a) or 2(b) hote pare
            if(last==1) // a shows if present state was a what would have happened
                a=1+getans(pos+1,0);
            else
                a=getans(pos+1,1);
            if(last==2) //b shows if present state was b what would have happened
            {
                b=1+getans(pos+1,0);
            }
            else
                b=getans(pos+1,2);
            ans=min(a,b);

    }
    return dp[pos][last]=ans;
}

int main()
{
cin>>n;
int a;
for(int i=0;i<n;i++)
    cin>>a,v.push_back(a);
memset(dp,-1,sizeof(dp));
cout<<getans(0,0)<<"\n";
}
