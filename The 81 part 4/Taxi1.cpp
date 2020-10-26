#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,a,ans=0,cnt1=0,cnt2=0,cnt3=0,cnt4=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a;
        if(a==1)cnt1++;
        else if(a==2)cnt2++;
        else if(a==3)cnt3++;
        else cnt4++;
    }

    ans+=cnt4;
    if(cnt3>=cnt1)
    {
        ans+=cnt3;
        cnt1=0;
    }
    else{
        ans+=cnt3;
        cnt1-=cnt3;
    }
    if(cnt2&1)
    {
        ans+=cnt2/2;
        cnt2=1;
    }
    else{
    ans+=cnt2/2;
    cnt2=0;
    }
    if(cnt2>0)
    {
        ans++;
        if(cnt1>2)
            cnt1-=2;
        else
            cnt1=0;
    }
    if(cnt1>0)
    {
        ans+=cnt1/4;
        if(cnt1%4)
            ans++;
    }
    cout<<ans<<"\n";

}
