#include<bits/stdc++.h>
using namespace std;
#define inf 1<<30
int arr[100002];
int st[400008];
void buildtree(int si,int ss,int se)
{
    if(ss==se)
    {
        st[si]=arr[ss]; // that's means it's a leaf node
        return;
    }

    int mid=(ss+se)/2;

    buildtree(2*si,ss,mid);
    buildtree(2*si+1,mid+1,se);

    st[si]=(st[2*si]+st[2*si+1]);
}

void update(int si,int ss,int se,int qi,int val)
{
    if(ss==se)
    {
        st[qi]=val;
        return;
    }
    int mid=(ss+se)/2;
    if(qi<=mid)
     update(2*si,ss,mid,qi,val);
    else
        update(2*si+1,mid+1,se,qi,val);
    st[si]=st[2*si]+st[2*si+1];
}
int query(int si,int ss,int se,int qs,int qe)
{
    if(qs>se || qe<ss)
        return inf;
    if(ss>=qs && se<=qe)
        return st[si];
    int mid=(ss+se)/2;
    int l=query(2*si,ss,mid,qs,qe);
    int r=query(2*si+1,mid+1,se,qs,qe);

    return l+r; // taker min of left and right child
}

int main()
{
    int n,q;
    cin>>n>>q;
    for(int i=1;i<=n;i++)
        cin>>arr[i];
       buildtree(1,1,n);

       while(q--)
       {
           int t,l,r;
           cin>>t>>l>>r;

           if(t==2)
           {

              int ans= query(1,1,n,l,r);
              cout<<ans<<"\n";
           }
           else
           {
               update(1,1,n,l+1,r+1);
           }
       }

}

