#include<bits/stdc++.h>
typedef long long ll;
const int maxN = 1e5+1;
using namespace std;

ll ar[maxN],st[4*maxN];

void buildtree(int si,int ss,int se)
{
    if(ss==se)
    {
        st[si]=ar[ss];
        return;
    }
    int mid=(ss+se)/2;
    buildtree(2*si,ss,mid);
    buildtree(2*si+1,mid+1,se);
    st[si]=st[2*si]+st[2*si+1];
}
void update(int si,int ss,int se,int qi,int val)
{
    if(ss==se)
    {
        st[si]=val;
        return;
    }
    int mid=(ss+se)/2;
    if(qi<=mid)
        update(2*si,ss,mid,qi,val);
    else
        update(2*si+1,mid+1,se,qi,val);
    st[si]=st[2*si]+st[2*si+1];
}

ll query(int si,int ss,int se,int qs,int qe)
{
    if(qs>qe)return 0;
    if(qs==ss && qe==se)
        return st[si];
    int mid=(ss+se)/2;
    ll l=query(2*si,ss,mid,qs,min(qe,mid));
    ll r=query(2*si+1,mid+1,se,max(qs,mid+1),qe);
    return l+r;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n,m,type,l,r;
    cin>>n>>m;
    for(int i=1;i<=n;i++)
        cin>>ar[i];
    buildtree(1,1,n);
    while(m--)
    {
        cin>>type>>l>>r;
        if(type==1)
        {
            update(1,1,n,l+1,r);
        }
        else
        {
            cout<<query(1,1,n,l+1,r)<<"\n";
        }
    }
}
