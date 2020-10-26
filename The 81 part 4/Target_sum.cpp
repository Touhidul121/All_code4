 #include<bits/stdc++.h>
 using namespace std;

 int main(){
     int n,x,s;
     cin>>n>>s;
     vector<int>a;
     for(int i=0;i<n;i++)
     {
         cin>>x;
         a.push_back(x);
     }

        int sum=0;
        for(int i=0;i<n;i++)
            sum+=a[i];

        int m=sum;
            bool dp[n+1][m+1];
    dp[0][0]=true;
    for(int j=1;j<=m;j++)
        dp[0][j]=false;
    for(int i=1;i<=n;i++)
    {
        for(int j=0;j<=m;j++)
        {
            if(j<a[i-1])
                dp[i][j]=dp[i-1][j];
            else
            {
                int need=j-a[i-1];
                if(dp[i-1][j]==true || dp[i-1][need]==true)
                    dp[i][j]=true;
                else
                    dp[i][j]=false;
            }
        }
    }
        vector<int>v;
        int cnt=0;

        for(int i=0;i<=m;i++)
        {
            if(dp[n][i]==1)v.push_back(i);
        }

        for(int i=0;i<v.size();i++)
        {
            for(int j=0;j<v.size();j++)
            {
              if(abs(v[i]-v[j])==s)cnt++;
            }
        }
        cout<<cnt<<" ";
        for(int i=0;i<v.size();i++)
            cout<<v[i]<<" ";
 }
