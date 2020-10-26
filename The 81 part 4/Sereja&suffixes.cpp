#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,a,m;
    cin>>n>>m;
    vector<int>v1;
    int v[100005];
    memset(v,0,sizeof(v));
    for(int i=0;i<n;i++)
    {
        cin>>a;
        v1.push_back(a);
    }
    int ind,cnt=0;
    int ans[100005];

        for(int j=n-1;j>=0;j--)
        {

            if(v[v1[j]]==0){
                cnt++;
                v[v1[j]]++;
            }
            ans[j]=cnt;
        }
        for(int i=0;i<m;i++)
        {
            cin>>ind;
            --ind;
            cout<<ans[ind]<<"\n";
        }

    }

