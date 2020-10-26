#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,sum=0,x;
    cin>>n;
    int v[n+5][6];
    vector<int>v1;

    for(int i=0;i<n;i++)
    {
        sum=0;
        for(int j=0;j<4;j++)
        {
            cin>>v[i][j];
            sum+=v[i][j];
        }
        if(i==0)
        {
            x=sum;
        }
        v1.push_back(sum);
    }
sort(v1.rbegin(),v1.rend());
    for(int i=0;i<n;i++)
    {
        if(v1[i]==x)
        {
            cout<<i+1<<endl;
            break;
        }
    }

}
