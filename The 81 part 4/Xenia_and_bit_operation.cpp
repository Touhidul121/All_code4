#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=131077;
long long int arr[N];

struct segment{
    ll value;
    ll level;
}st[4*N];

void build(int si,int ss,int se)
{
    if(ss>se)
    return ;
    if(ss == se)
    {
        st[si].value=arr[ss];
        st[si].level=1;
        return;
    }
    int mid=ss+se>>1;
    build(2*si,ss,mid);
    build(2*si+1,mid+1,se);
    st[si].level=st[2*si].level+1;
    if(st[si].level&1)
    {
        st[si].value=st[2*si].value^st[2*si+1].value;
    }
    else{
        st[si].value=st[2*si].value|st[2*si+1].value;
    }
}
void update(int si,int ss,int se,int qi,long long int val)
{
    if(ss>se)
    return;
    if(ss == se)
    {
        st[si].value=val;
        return;
    }

        int mid=ss+se>>1;
        if(qi<=mid)
        update(2*si,ss,mid,qi,val);
        else update(2*si+1,mid+1,se,qi,val);
        if(st[si].level&1)
        {
            st[si].value=st[2*si].value^st[2*si+1].value;
        }
        else{
            st[si].value=st[2*si].value|st[2*si+1].value;
        }

}

int main() {
    int n,m;
    scanf("%d %d",&n,&m);
    long long int nn=pow(2,n);

    long long int i;
    for(i=1;i<=nn;i++)
    {
        scanf("%lld",&arr[i]);
    }
    int p;
    long long int b;
    build(1,1,nn);
    for(i=0;i<m;i++)
    {
        scanf("%d %lld",&p,&b);
        update(1,1,nn,p,b);
        printf("%lld\n",st[1].value);
    }
    return 0;
}
