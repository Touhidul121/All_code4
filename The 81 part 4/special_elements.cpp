#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,a;
        cin>>n;
        vector<int>v;
        for(int i=0;i<n;i++)
        {
            cin>>a;
            v.push_back(a);
        }
        vector<int>v1(n+5);
        int sum=0;
        for(int i=0;i<n-1;i++)
        {
            sum=v[i];
            for(int j=i+1;j<n;j++)
            {
             sum+=v[j];
             if(sum<=n)
                v1[sum]++;
            }
        }
        int ans=0;
        for(int i=0;i<n;i++)
        {
            if(v1[v[i]]>0)
                ans++;
        }
        cout<<ans<<"\n";
    }
}
