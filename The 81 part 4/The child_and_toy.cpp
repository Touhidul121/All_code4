#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,x,y;
    cin>>n>>m;

    int a[n+1];

    long long res=0;
    for(int i=1;i<=n;i++)
        cin>>a[i];

    for(int i=1;i<=m;i++)
    {
        cin>>x>>y;
        res+=min(a[x],a[y]);
    }
    cout<<res<<"\n";
}
