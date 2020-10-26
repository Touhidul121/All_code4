#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,q;
    cin>>n>>q;
    int v[n+1];
    memset(v,0,sizeof(v));

vector<pair<int,int>>v1;

    int cnt=0,sum=0,t,s,tm,x=0;

    for(int i=0;i<q;i++)
    {
        cin>>t>>s>>tm;
        v1.push_back(make_pair(s,x));
        if(t>=x)
        {
            int l=0;
            sort(v1.begin(),v1.end());
            for(int k=0;k<v1.size();k++)
            {
                if(t>=v1[k].second)
                {
                    l=v1[k].first;
                }
            }
            int count=0;
            for(int j=n;j>=0;j--)
            {
                if(v[j]>0)
                v[j]=0;
                count++;
                if(count==l)
                    break;
            }
        }
        cnt=0;
        sum=0;
        for(int j=1;j<=n;j++)
        {
            if(v[j]==0)
            {
                cnt++;
                sum+=j;
                v[j]++;
            }
            if(cnt==s)
                break;
        }
        if(cnt>=s)
            cout<<sum<<"\n";
        else
            cout<<-1<<"\n";

            x=tm+t;
    }
}
