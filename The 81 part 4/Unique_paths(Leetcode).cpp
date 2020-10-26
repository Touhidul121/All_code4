#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

class solution
{
public:
    int unique_path(vector<vector<int>>&ar)
    {
        int n=ar.size();
        int m=ar[0].size();

        ll dp[n+1][m+1];

        dp[n][m]=ar[n-1][m-1]^1;

        for(int i=m-1;i>=1;i--)
        {
            if(ar[n-1][i-1]==1 || dp[n][i+1]==0)
                dp[n][i]=0;
            else
                dp[n][i]=1;
        }
        for(int i=n-1;i>=1;i--)
        {
            if(ar[i-1][m-1]==1 || dp[i+1][m]==0)
                dp[i][m]=0;
            else
                dp[i][m]=1;
        }

        for(int i=n-1;i>=1;i--)
        {
            for(int j=m-1;j>=1;j--)
            {
                if(ar[i-1][j-1]==1)
                    dp[i][j]=0;
                else
                    dp[i][j]=dp[i+1][j]+dp[i][j+1];
            }
        }
        return dp[1][1];
    }
};
