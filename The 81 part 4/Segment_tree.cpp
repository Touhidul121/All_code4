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

    st[si]=min(st[2*si],st[2*si+1]); // father will hold min of left child and right child
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
    return min(l,r); // taker min of left and right child
}

int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
        cin>>arr[i];
       buildtree(1,1,n);
    int q,a,b;
    cin>>q;
    for(int i=1;i<=q;i++)
    {
        cin>>a>>b;
        cout<<query(1,1,n,a+1,b+1)<<"\n";// (spoj problem RMQSQ)input is in zero based indexing that's why we are using a+1 b+1

    }
}


