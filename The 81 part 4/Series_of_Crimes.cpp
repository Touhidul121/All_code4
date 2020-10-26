#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    char ar[n][m];
    int cnt=0,row,column;

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
        cin>>ar[i][j];
        if(ar[i][j]=='*')cnt++;
        }
        if(cnt==1)row=i+1;
        cnt=0;
    }
    for(int j=0;j<m;j++)
    {
        for(int i=0;i<n;i++)
        {
            if(ar[i][j]=='*')cnt++;
        }
        if(cnt==1)column=j+1;
        cnt=0;
    }
    cout<<row<<" "<<column<<"\n";
}
