#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout<<"Enter array Size"<<"\n";
    cin>>n;
    int a[n+1];
    cout<<"Enter array Elements"<<"\n";
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    int m;
    cout<<"Enter sum"<<"\n";
    cin>>m;
    bool dp[n+1][m+1];
    dp[0][0]=true;
    for(int j=1;j<=m;j++)
        dp[0][j]=false;
    for(int i=1;i<=n;i++)
    {
        for(int j=0;j<=m;j++)
        {
            if(j<a[i])
                dp[i][j]=dp[i-1][j];
            else
            {
                int need=j-a[i];
                if(dp[i-1][j]==true || dp[i-1][need]==true)
                    dp[i][j]=true;
                else
                    dp[i][j]=false;
            }
        }
    }
    if(dp[n][m])
        cout<<"YES"<<"\n";
    else
        cout<<"NO"<<"\n";
}
