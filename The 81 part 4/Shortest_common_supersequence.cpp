#include <bits/stdc++.h>
using namespace std;

string LCS(string str1,string str2)
{
    int n=str1.size();
    int m=str2.size();

    int dp[n+1][m+1];

    for(int i=0;i<=n;i++)
    {
        for(int j=0;j<=m;j++)
        {
            if(i==0 || j==0)
            {
                dp[i][j]=0;continue;
            }
            if(str1[i-1]==str2[j-1])
            dp[i][j]=1+dp[i-1][j-1];
            else
            dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
        }
    }

    string lcs="";
    int i=n,j=m;
    while(i>0 && j>0)
    {
        if(str1[i-1]==str2[j-1])
        {
            lcs+=str1[i-1];
            i--;j--;
        }
        else if(dp[i-1][j]>dp[i][j-1])
        i--;
        else
        j--;
    }
    reverse(lcs.begin(),lcs.end());
    return lcs;
}
int main() {



	    string str1,str2;
	    cin>>str1>>str2;

	    string ans=LCS(str1,str2);
	    string s=str1+str2;

	    int i=0,j=0;
	    while(i<s.size())
        {
          if(s[i]==ans[j])
          {
              s[i]='#';j++;
          }
          if(j==ans.size())break;
          i++;
        }
	    for(int i=0;i<s.size();i++)
        {
            if(s[i]!='#')cout<<s[i];
        }



}
