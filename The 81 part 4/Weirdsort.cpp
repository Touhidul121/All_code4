#include<bits/stdc++.h>
using namespace std;

void fun()
{
    int n,m,a;
    cin>>n>>m;
    vector<int>v,v1,p;
    for(int i=0;i<n;i++)
    {
        cin>>a;
        v.push_back(a);
    }
    for(int i=0;i<m;i++)
    {
        cin>>a;
        p.push_back(a);
    }
    v1=v;
    sort(v1.begin(),v1.end());
    bool flag=false;
    for(int i=0;i<=n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(v[p[j]-1]>v[p[j]])
                swap(v[p[j]-1],v[p[j]]);
        }
        if(v==v1)
        {
            flag=true;
            break;
        }
    }
    if(flag)
        cout<<"YES"<<'\n';
    else
        cout<<"NO"<<"\n";

}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        fun();
    }
}
