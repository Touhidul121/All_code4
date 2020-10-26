#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ll n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    set<char>st;
    char x;
    for(ll i=0;i<k;i++)
    {
        cin>>x;
        st.insert(x);
    }

    ll ans=0,cnt=0;
    for(int i=0;i<n;i++)
    {
        while(st.find(s[i])!=st.end())
        {
            cnt++;
            i++;
        }
        ans+=(cnt*(cnt+1))/2;
        cnt=0;
    }
    cout<<ans<<"\n";
}
