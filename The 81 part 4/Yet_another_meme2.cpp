#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,count=0,flag=0;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
            cin>>a[i];
            for(int j=)
            for(int i=0;i<n;i++)
            {
                if(a[i]!=(a[n-i-1]))
                    count++;
            }
            cout<<count<<endl;
            if(n-count<3)
                cout<<"NO"<<endl;
            else
                cout<<"YES"<<endl;
    }}
