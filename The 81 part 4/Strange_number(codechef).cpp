#include<bits/stdc++.h>
using namespace std;

map<int,int>mp;
int prime(int n){

    int cnt=0;
    for(int i=2;i*i<=n;i++)
    {
        if(n%i==0)
        {
            while(n%i==0)
            {
                cnt++;
                n/=i;
            }
            mp[i]=cnt;
            cnt=0;
        }
    }
    if(n>1)
    {
            mp[n]++;

    }
    int res=0;
    for(auto x:mp)
        res+=x.second;
        return res;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x,k;
        cin>>x>>k;
        int res=0;
        res=prime(x);

        if(k<=res)
            cout<<1<<"\n";
        else
            cout<<0<<"\n";
            mp.clear();
    }
}
