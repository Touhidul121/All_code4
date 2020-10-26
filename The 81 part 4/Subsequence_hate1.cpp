#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int n=s.size();
        int cnt0[n],cnt1[n],rvcnt0[n],rvcnt1[n],count0=0,count1=0;

        for(int i=0;i<n;i++)
        {
            if(s[i]=='0')count0++;
            cnt0[i]=count0;
        }
        for(int i=0;i<n;i++)
        {
            if(s[i]=='1')count1++;
            cnt1[i]=count1;
        }

        for(int i=0;i<n;i++)
        {
            rvcnt0[i]=count0-cnt0[i];
        }
        for(int i=0;i<n;i++)
        {
            rvcnt1[i]=count1-cnt1[i];
        }

        int ans1=INT_MAX,ans2=INT_MAX;

        for(int i=0;i<n;i++)
        {
            ans1=min(ans1,cnt1[i]+rvcnt0[i]);
            ans2=min(ans2,cnt0[i]+rvcnt1[i]);
        }
        cout<<min(ans1,ans2)<<"\n";

    }
}
