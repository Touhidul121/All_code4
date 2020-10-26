#include<bits/stdc++.h>
using namespace std;

int power(int a,int n)
{
    int res=1;
    while(n)
    {
        if(n&1)
            res=res*a, n--;
        n=n/2;
        a=a*a;
    }
    return res;
}
int highest_power(int n,int k)
{
    int i=0;
 int a=power(n,i);
 while(a<=k)
 {
     i++;
     a=power(n,i);
 }
 return i-1;
}

int vis[50]={0};

int getans(int n,int k)
{
    while(k)
    {
        int t=highest_power(n,k);
        if(vis[t])
        {
            cout<<-1<<"\n";return 0;
        }
        else
        {
            vis[t]=1;
        }
        k-=power(n,t);
    }
    for(int i=0;i<50;i++)
    {
        if(vis[i])cout<<i<<" ";
    }
    cout<<"\n";
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);

    int n,k;
    cin>>n>>k;
    getans(n,k);
}
