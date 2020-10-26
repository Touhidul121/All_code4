#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
int ar[1001];

ll dp[11][100][2];

ll getsum(int pos,int n,ll sum,bool flag)
{
    if(pos>n)return sum;

    if(dp[pos][sum][flag]!=-1)return dp[pos][sum][flag];

    int limit=9;
    if(!flag)limit=ar[pos];

    ll res=0;

    for(int i=0;i<=limit;i++)
    {
        if(i<limit || flag)
            res+=getsum(pos+1,n,sum+i,true);
        else
            res+=getsum(pos+1,n,sum+i,false);
    }
    return dp[pos][sum][flag]=res;
}
int sum(string s)
{
    int res=0;
    for(char x:s)
        res+=x-'0';
    return res;
}
int main()
{

    while(1)
    {
        string a,b;
        cin>>a>>b;
        if(a=="-1" && b=="-1")
            break;
        ll L,R;
        memset(dp,-1,sizeof(dp));
        for(int i=0;i<a.size();i++)
        ar[i+1]=a[i]-'0';
        L=getsum(1,a.size(),0,0);

        memset(dp,-1,sizeof(dp));
        for(int i=0;i<b.size();i++)
        ar[i+1]=b[i]-'0';
        R=getsum(1,b.size(),0,0);
        cout<<R-L+sum(a)<<"\n";
    }
}
