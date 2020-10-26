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
        sort(v.begin(),v.end());
        bool flag=false;
        for(int i=0;i<n-1;i++)
        {
            if(v[i+1]-v[i]<=1)
            {
                flag=true;
            }
        }
        if(flag)
            cout<<2<<"\n";
        else
            cout<<1<<"\n";
    }
}
