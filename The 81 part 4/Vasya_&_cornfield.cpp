#include<bits/stdc++.h>
using namespace std;

int main()
{
    int d,n,p,a,b,x,y,f1,f2,f3,f4;
    cin>>n>>d>>p;
    vector<pair<int,int>> v;
    vector<int> v1;

    for(int i=0;i<p;i++)
    {
        cin>>a>>b;
        v.push_back(make_pair(a,b));
    }
    for(int i=0;i<p;i++)
    {
        x=v[i].first;
        y=v[i].second;

        f1=x+y-d;
        f2=x+y-2*n+d;
        f3=x-y-d;
        f4=x-y+d;

        if(f1>=0&&f2<=0&&f3<=0&&f4>=0)
            v1.push_back(1);
        else
            v1.push_back(0);
    }
    for(int i=0;i<p;i++)
    {
        if(v1[i]==1)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
}
