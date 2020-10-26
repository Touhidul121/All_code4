#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m=1,count=1,a;
    cin>>n;
    vector<int>v;
    for(int i=0;i<n;i++)
    {
        cin>>a;
        v.push_back(a);
    }
    sort(v.begin(),v.end());

    for(int i=0;i<n-1;i++)
    {
        if(v[i]==v[i+1])
            count++;

            if(m<=count)
                m=count;
        if(v[i]!=v[i+1])
        {
            count=1;
        }
    }
    if(n&1)
    {
        if(m>n/2+1)
            cout<<"NO"<<endl;
        else
            cout<<"YES"<<endl;
    }
    else
    {
        if(m>n/2)
            cout<<"NO"<<endl;
        else
            cout<<"YES"<<endl;
    }
}
