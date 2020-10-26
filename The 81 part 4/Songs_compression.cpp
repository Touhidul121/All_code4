#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
int main()
{
    int n,m,a,b;
    cin>>n>>m;
    ll sum=0;
    vector<int>v;
    for(int i=0;i<n;i++)
    {
        cin>>a>>b;
        sum+=a;
        v.push_back(a-b);
    }
    if(sum<=m)
    {
        cout<<0<<"\n";
    }
    else{
            sort(v.rbegin(),v.rend());
    for(int i=0;i<n;i++)
    {
        sum-=v[i];
        if(sum<=m)
        {
            cout<<i+1<<"\n";
            return 0;
        }
    }
    cout<<-1<<"\n";
    }
}
