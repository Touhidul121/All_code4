#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,a;
    cin>>n;

    vector<int>v,v1;

    for(int i=0;i<n;i++)
    {
        cin>>a;
        v.push_back(a);
    }

    int m,x1=0,y1=0;
    cin>>m;
    int mx=0;
    for(int i=0;i<m;i++)
    {
        int b,c,d;

        cin>>b;
v1.push_back(b);
        if(b==1)
        {
            cin>>c>>d;
            x1=c;
            y1=d;
            v[x1-1]=y1;
        }
        else
        {
            cin>>c;
            mx=max(mx,c);
        }

    }
//cout<<mx<<" \n";
    for(int i=0;i<n;i++)
    {
        if(v[i]<mx)
            v[i]=mx;
    }
for(int i=0;i<n;i++)
        cout<<v[i]<<" ";
    cout<<"\n";


if(v1[m-1]==1&&y1<mx)
    v[x1-1]=y1;
//cout<<x1<<" "<<y1<<"\n";
    for(int i=0;i<n;i++)
        cout<<v[i]<<" ";
    cout<<"\n";

}
