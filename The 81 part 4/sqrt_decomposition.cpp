#include<bits/stdc++.h>
using namespace std;

#define MX 100001
int ar[MX];
vector<int>F;
int getmin(int l,int r,int blk)
{
    int lb=l/blk;
    int rb=r/blk;
    int mn=INT_MAX;

    if(lb==rb)
    {
        for(int i=l;i<=r;i++)
            mn=min(mn,ar[i]);
    }
    else
    {
        for(int i=l;i<blk*(lb+1);i++)
            mn=min(mn,ar[i]);
        for(int i=lb+1;i<rb;i++)
            mn=min(mn,F[i]);
        for(int i=rb*blk;i<=r;i++)
            mn=min(mn,ar[i]);
    }
    return mn;
}
int main()
{
    int n,i=0;
    cin>>n;
    int blk=(int)(sqrt(n+.0))+1;

    for(int i=0;i<n;i++)
        cin>>ar[i];
    int mn=INT_MAX;
    for(i=0;i<n;i++)
    {
        mn=min(mn,ar[i]);
        if((i+1)%blk==0)
            {
                F.push_back(mn);
                mn=INT_MAX;
            }
    }
    if(i%blk>0)
        F.push_back(mn);

   int q;
   cin>>q;
   for(int i=1;i<=q;i++)
   {
       int l,r;
       cin>>l>>r;
       cout<<getmin(l,r,blk)<<"\n";
   }

}
