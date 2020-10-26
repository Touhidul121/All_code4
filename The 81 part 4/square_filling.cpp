#include<bits/stdc++.h>
using namespace std;

int b[51][51];
int main()
{
    int n,m;
    cin>>n>>m;
    int a[n][m];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
            cin>>a[i][j];
    }
    vector<pair<int,int>>v;
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<m-1;j++)
        {
            if(a[i][j]==1&&a[i][j+1]==1&&a[i+1][j]==1&&a[i+1][j+1]==1)
            {
             v.push_back({i+1,j+1});
             b[i][j]=b[i][j+1]=b[i+1][j]=b[i+1][j+1]=1;
            }

        }
    }
    bool f=false;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(a[i][j]!=b[i][j])
            {
                f=true;
                break;
            }
        }
    }

    if(f)
        cout<<-1<<"\n";
    else
    {

        if(v.size()==0)
            cout<<0<<"\n";
        else{
        cout<<v.size()<<"\n";
        for(auto x:v)
            cout<<x.first<<" "<<x.second<<"\n";
        }
    }
}
