#include<bits/stdc++.h>
using namespace std;


int solve(vector<int>wt,vector<int>val,int pos,int w)
{
    if(pos<0 || w==0)
        return 0;
    if(wt[pos]<=w)
    {
        return max(val[pos]+solve(wt,val,pos,w-wt[pos]),solve(wt,val,pos-1,w));
    }
    else
        return solve(wt,val,pos-1,w);
}
int main()
{
    int n,a;
    cin>>n;
    vector<int> wt(n),val(n);

    for(int i=0;i<n;i++)cin>>val[i];
    for(int i=0;i<n;i++)cin>>wt[i];

    int w;
    cin>>w;

    int max_profit=solve(wt,val,n-1,w);
    cout<<max_profit<<"\n";
}
