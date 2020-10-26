#include<bits/stdc++.h>
using namespace std;
#define inf 1000000001

typedef long long ll;
int a[100001];
ll st[4*100001];
void buildtree(int si,int ss,int se)
{
    if(ss==se)
    {
        st[si]=a[ss];
        return;
    }
    int mid=(ss+se)/2;
    buildtree(2*si,ss,mid);
    buildtree(2*si+1,mid+1,se);

    st[si]=min(st[2*si],st[2*si+1]);
}

void update(int si,int ss,int se,int qi,int val)
{
    if(ss==se && se==qi)
    {
        st[si]=val;
        return;
    }
    int mid=(ss+se)/2;
    if(qi<=mid)
        update(2*si,ss,mid,qi,val);
    else
        update(2*si+1,mid+1,se,qi,val);
    st[si]=min(st[2*si],st[2*si+1]);
}
ll query(int si,int ss,int se,int qs,int qe)
{
    if(ss>qe || se<qs)return inf ;
    if(ss>=qs && se<=qe)
        return st[si];
    int mid=(ss+se)/2;
    ll l=query(2*si,ss,mid,qs,qe);
    ll r=query(2*si+1,mid+1,se,qs,qe);
    return min(l,r);
}
int main()
{
  int n,q,l,r,t;
  cin>>n>>q;
  for(int i=1;i<=n;i++)
    cin>>a[i];
  buildtree(1,1,n);
  for(int i=1;i<=q;i++)
  {
      cin>>t>>l>>r;
      if(t==1)
      {
          update(1,1,n,l+1,r);
      }
      else
      {
          ll m=query(1,1,n,l+1,r);
          cout<<m<<"\n";
      }
  }

}

