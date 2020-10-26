#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,k,m=INT_MAX,flag=0,a,m2=0,m3=INT_MAX;
    cin>>n>>k;

    vector<int>v;
    for(int i=0;i<n;i++)
    {
        cin>>a;
        if(m3>a)
            m3=a;
        if(m2<a)
            m2=a;
        v.push_back(a);
    }

    for(int i=0;i<k;i++)
    {
        cin>>a;
        if(a<m)
        {
            m=a;
        }
    }
int res=max(2*m3,m2);
//cout<<res<<" "<<m<<endl;
    for(int i=0;i<n;i++)
    {
        if(2*v[i]<=res)
            flag++;

    }
         if(!flag||m<=res)
            cout<<-1<<endl;
            else if(flag)
            cout<<res<<endl;

}
