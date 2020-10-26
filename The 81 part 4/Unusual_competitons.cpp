#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;cin>>n;
    string s;
    cin>>s;
    int ans=0,cnt=0,cnt1=0,cnt2=0;
    for(int i=0;i<n;i++)
    {
        if(s[i]=='(')
            cnt1++;
        else
            cnt2++;
    }
    if(cnt1!=cnt2)
        cout<<-1<<"\n";
    else
    {

        for(int i=0;i<n;i++)
        {
            if(s[i]=='(')
            {
                if(cnt<0)
                ans+=2;
                cnt++;
            }
            else
                cnt--;
        }
        cout<<ans<<"\n";
    }
}
