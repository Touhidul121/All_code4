#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n=4;
    int a[n]={3,4,5,2};
    int sum=10;
    bool b[n][12];
    for(int i=0;i<n;i++)
        b[i][0]=true;
    for(int j=1;j<sum+1;j++)
        b[0][j]=false;
    if(a[0]<=sum)
        b[0][a[0]]=true;
    for(int i=1;i<n;i++)
    {
        for(int j=1;j<sum+1;j++)
        {
          if(j<a[i])
                b[i][j]=b[i-1][j];
          else
          {
              b[i][j]=b[i-1][j]||b[i-1][j-a[i]];
          }
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<12;j++)
            cout<<b[i][j]<<" ";

        cout<<'\n';
    }
int
i=n-1;
    for(int j=sum;j>=1;)
    {
        for(;i>=1;i--)
        {
            if(b[i-1][j]==0){
               cout<<a[i]<<" ";

                j=j-a[i]+1;
                i--;
                break;

        }
        //cout<<i<<"\n";
        if(i==0)
            break;
//cout<<j<<"\n";

    }
    }
    if(b[n-1][sum]==true)
        cout<<"YES"<<"\n";
    else
        cout<<"NO"<<"\n";
}
