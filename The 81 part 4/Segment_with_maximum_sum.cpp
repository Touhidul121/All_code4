#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
ll a[100001],n,m;


struct data
{
    ll sum,pref,suff,ans;
};

struct data st[400004];

struct data combine(struct data l,struct data r)
{
    struct data res;
    res.sum=l.sum+r.sum;//normal sum

    res.pref=max(l.pref,l.sum+r.pref);//pref sum
    res.suff=max(r.suff,r.sum+l.suff);//suff sum

    res.ans=max(max(l.ans,r.ans),l.suff+r.pref);//maximal sum -it will either come from left,right or( pref of right+suff of left)

    return res;
}

struct data make_data(ll val) // making leaf node
{
    struct data res;
    res.sum=val;
    res.pref=res.suff=res.ans=max((ll)0,val);
    return res;
}

void build(ll si,ll ss,ll se)
{
    if(ss==se)
    {
        st[si]=make_data(a[ss]);
        return ;
    }
    ll mid=(ss+se)/2;

    build(2*si,ss,mid);
    build(2*si+1,mid+1,se);
    st[si]=combine(st[2*si],st[2*si+1]);
}

void update(ll si,ll ss,ll se,ll qi,ll val)
{
    if(ss==se)
    {
        st[si]=make_data(val);
        return;
    }
    ll mid=(ss+se)/2;
    if(qi<=mid)
        update(2*si,ss,mid,qi,val);
    else
        update(2*si+1,mid+1,se,qi,val);
    st[si]=combine(st[2*si],st[2*si+1]);
}

struct data query(ll si,ll ss,ll se,ll qs,ll qe)
{
    if(qs>qe)
        return make_data(0);
    if(qs==ss&&qe==se)
        return st[si];

    ll mid=(ss+se)/2;
    return combine(query(2*si,ss,mid,qs,min(qe,mid)),query(2*si+1,mid+1,se,max(mid+1,qs),qe));
}

int main()
{

    cin>>n>>m;

    for(ll i=1;i<=n;i++)
        cin>>a[i];

    ll l,r;
    build(1,1,n);
   struct data ans=query(1,1,n,1,n);
    cout<<ans.ans<<"\n";
    for(ll i=1;i<=m;i++)
    {
        cin>>l>>r;
        update(1,1,n,l+1,r);
        struct data ans=query(1,1,n,1,n);
        cout<<ans.ans<<"\n";
    }
}
