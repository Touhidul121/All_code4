#include<bits/stdc++.h>
#define inf 200005
using namespace std;

string s;
bool isValid(int k)
{

    int ar[4]={0};
    for(int i=0;i<k-1;i++)
    {
        int idx=s[i]-'0';
        ar[idx]++;
    }

    for(int i=k-1;i<s.size();i++)
    {
        int idx=s[i]-'0';
        ar[idx]++;
        if((ar[1]>0) && (ar[2]>0) && (ar[3]>0))
            return true;
        idx=s[i+1-k]-'0';
        ar[idx]--;
    }
    return false;
}
int BS(int x)
{

    int res=inf;
    int L=3;
    int H=x;
    while(L<=H)
    {
        int mid=(L+H)/2;

        if(isValid(mid))
        {
            res=min(mid,res);
            H=mid-1;
        }
        else
            L=mid+1;
    }
    return res;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {

        cin>>s;
        int n=s.size();
       int l= BS(n);

       if(l==inf)cout<<0<<"\n";
       else
        cout<<l<<"\n";
    }
}
