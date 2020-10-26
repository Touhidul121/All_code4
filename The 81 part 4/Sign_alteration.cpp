#include<bits/stdc++.h>
using namespace std;
#define maxN 100001
int ar[maxN],st[4*maxN],ans;
static int i=0;

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
}
void update1(int si,int ss,int se,int qs,int qe)
{
    if(ss==se)
    {
        if(i%2==0)
        st[si]=ar[ss];
        else
            st[si]=-ar[ss];
        i++;
        return;

    }
    int mid=(ss+se)/2;
    if()
}
int query(int si,int ss,int se,int qs,int qe)
{
    if(ss>qe || se<qs)return 0;
    if(ss>=qs && se<=qe)
    {
        return st[si];
    }
    int mid=(ss+se)/2;
    return query(2*si,ss,mid,qs,qe)+
    query(2*si+1,mid+1,se,qs,qe);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n,q,type,l,r;
    cin>>n;
    for(int i=1;i<=n;i++)cin>>ar[i];
    buildtree(1,1,n);
    while(q--)
    {
        cin>>type>>l>>r;
        if(type==1)
        {
            query(1,1,n,l,r);

        }
    }
}
