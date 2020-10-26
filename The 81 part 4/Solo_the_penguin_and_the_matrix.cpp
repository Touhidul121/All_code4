#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,d,a;
    cin>>n>>m>>d;

vector<int>v;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>a;
            v.push_back(a);
        }
    }
    bool f=false;
    sort(v.begin(),v.end());
    int x=(n*m)/2;

    x=v[x];
    int ans=0,y;
cout<<x<<" ";
    for(int i=0;i<v.size();i++)
    {
        y=abs(v[i]-x);

        if(y%d != 0)
        {
            f=true;
            break;
        }
        else
            ans+=(y/d);
    }
    if(f)
        cout<<-1<<"\n";
    else
    cout<<ans<<"\n";
}
