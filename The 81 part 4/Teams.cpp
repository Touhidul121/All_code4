#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    int max0,max1;
    max0=m+1, max1=2*(n+1);
    if(n<=max0 && m<=max1)
    {
        if(n==m)
        {
            for(int i=0;i<n;i++)
                cout<<"01";
                cout<<"\n";
        }
        else if(m==n-1)
        {
            for(int i=0;i<m;i++)
                cout<<"01";
            cout<<"0";
            cout<<"\n";
        }
        else
        {
            int diff=m-(n+1);
            for(int i=0;i<n;i++)
            {
                if(i<diff)
                {
                    cout<<"11";
                }
                else
                    cout<<"1";
                cout<<"0";
            }
            if(m==max1)
                cout<<"11";
            else
                cout<<"1";
            cout<<"\n";
        }
    }
    else
        cout<<-1<<"\n";
}
