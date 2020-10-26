// when there are three choices
// you are told to make a choice the min number of times

#include<bits/stdc++.h>
#define INF 1000
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    int dp[3][n];
      for(int i=0;i<3;i++)
      {
          for(int j=0;j<n;j++)
            dp[i][j]=INF;
      }
      dp[0][0]=1;
      if(a[0]==1||a[0]==3)
        dp[1][0]=0;
      else
        dp[1][0]=INF;
      if(a[0]==2||a[0]==3)
        dp[2][0]=0;
      else
        dp[2][0]=INF;

            for(int j=1;j<n;j++)
            {

               dp[0][j]=1+min(dp[0][j-1],min(dp[1][j-1],dp[2][j-1]));
               if(a[j]==1|| a[j]==3)
                dp[1][j]=min(dp[0][j-1],dp[2][j-1]);
               else dp[1][j]=INF;
               if(a[j]==2||a[j]==3)
                dp[2][j]=min(dp[0][j-1],dp[1][j-1]);
               else
                dp[2][j]=INF;
            }
            cout<<min(dp[0][n-1],min(dp[1][n-1],dp[2][n-1]))<<"\n";


}
