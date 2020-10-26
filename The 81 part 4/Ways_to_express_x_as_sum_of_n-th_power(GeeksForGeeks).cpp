#include<bits/stdc++.h>
using namespace std;
int power(int a,int n)
{
    int res=1;
    while(n)
    {
        if(n&1)
            res=res*a;
        n=n/2;
        a=a*a;
    }
    return res;
}
int getans(int x,int n,int cur,int sum)
{
    if(sum>x)return 0;
    if(sum==x)return 1;
    int ans=0;
    int p=0;
    while(p+sum<=x)
    {
        p=power(cur,n);
        ans+=getans(x,n,cur+1,sum+p);
        cur++;

    }

    return ans;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);

    int x,n;
    cin>>x>>n;
    cout<<getans(x,n,1,0)<<"\n";
}
