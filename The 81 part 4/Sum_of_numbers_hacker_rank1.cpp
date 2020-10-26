#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
    int n;

    cin>>n;
    int a[n+1];

    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    int m;

    cin>>m;
    bool dp[n+1][m+1];
    dp[0][0]=1;
    for(int j=1;j<=m;j++)
        dp[0][j]=0;
    for(int i=1;i<=n;i++)
    {
        for(int j=0;j<=m;j++)
        {
            if(j<a[i])
                dp[i][j]=dp[i-1][j];
            else
            {
                int need=j-a[i];
                if(dp[i-1][j]==1 || dp[i-1][j-a[i]]==1)
                    dp[i][j]=1;
                else
                    dp[i][j]=0;
            }
        }
    }
    for(int i=0;i<=n;i++)
    {
        for(int j=0;j<=m;j++)
        {
            cout<<dp[i][j]<<" ";
        }
        cout<<"\n";
    }
    if(dp[n][m])
        cout<<"YES"<<"\n";
    else
        cout<<"NO"<<"\n";
    }
}

