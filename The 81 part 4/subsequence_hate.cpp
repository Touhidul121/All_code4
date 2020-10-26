#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int n=s.size();
        int cnt0=0,cnt1=0;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='0')
                cnt0++;
            else
                cnt1++;
        }

        int pref0[n],pref1[n],suff0[n],suff1[n];
        int zero=0,one=0;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='0')
                zero++;
            else
                one++;
            pref0[i]=zero;
            suff0[i]=cnt0-zero;
            pref1[i]=one;
            suff1[i]=cnt1-one;
        }
        int ans1=INT_MAX,ans2=INT_MAX;
        for(int i=0;i<n;i++)
        {
            ans1=min(ans1,pref0[i]+suff1[i]);
            ans2=min(ans2,pref1[i]+suff0[i]);
        }
        cout<<min(ans1,ans2)<<"\n";
}
}
