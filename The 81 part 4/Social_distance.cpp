#include<bits/stdc++.h>
using namespace std;

int main()
{



    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;

        string s;
        cin>>s;

        int ans=0,cnt=0;
        int i=0;
        int j=n-1;

        while(i<n &&s[i]=='0')
            {
                cnt++;
                i++;
            }

        if(cnt>k||i==n)
            ans++,s[0]='1';

        cnt=0;
        while(s[j]=='0'&&j>=0)
            {
                cnt++;
                j--;
            }
        if(cnt>k)
            ans++,s[n-1]='1';
        vector<int>v;
        for(int i=0;i<n;i++)
            if(s[i]=='1')
            v.push_back(i+1);

        for(int i=0;i<v.size()-1;i++)
        {
            if(v[i+1]-v[i]>k)
            ans+=(v[i+1]-(k+1)-v[i])/(k+1);
        }
        cout<<ans<<"\n";
    }
}
