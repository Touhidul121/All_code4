#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);

    int n,k;
    cin>>n>>k;
    string s;cin>>s;
    int a[n+1]={0},b[n+1]={0};
    for(int i=0;i<n;i++)
    {
        a[i+1]=a[i]+(s[i]=='a');
        b[i+1]=b[i]+(s[i]=='b');
    }

    int ans1=0,ans2=0;
    bool f1=false,f2=false;
    int l=1,r=n;
    while(l<=r)
    {
        int mid=(l+r+1)/2;
        f1=false;

        for(int i=1;i<=mid;i++)
        {
            if(b[mid]-b[i-1]<=k)
            {
                f1=true;
                ans1=max(ans1,mid-i+1);
            }
        }
        if(f1)l=mid+1;
        else r=mid-1;
    }
    l=1,r=n;
    while(l<=r)
    {
        int mid=(l+r+1)/2;
        f2=false;

        for(int i=1;i<=mid;i++)
        {
            if(a[mid]-a[i-1]<=k)
            {
                f2=true;
                ans2=max(ans2,mid-i+1);
            }
        }
        if(f2)l=mid+1;
        else r=mid-1;
    }
    cout<<max(ans1,ans2)<<" ";

}
