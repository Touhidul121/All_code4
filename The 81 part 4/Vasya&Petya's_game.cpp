#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);

    int n,n1;
    cin>>n;
    n1=n;
    map<int,int>mp;

    for(int i=2;i*i<=n;i++)
    {
        if(n%i==0)
        {
            while(n%i==0)
                n=n/i;
            mp[i]++;
        }
    }
    if(n>1)
        mp[n]++;

    if(mp.size()==1)
    {
        cout<<n1-1<<"\n";
        for(int i=2;i<=n1;i++)
            cout<<i<<" ";
        cout<<"\n";
    }
    else
    {
        cout<<n1-2<<"\n";
        for(int i=2;i<=n1-1;i++)
            cout<<i<<" ";
        cout<<"\n";
    }
}
