#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);

    ll ar[3];
    cin>>ar[0]>>ar[1]>>ar[2];

    sort(ar,ar+3);

    ll ans;
    ans=ar[0];

    ll x=ar[1]-ar[0];
    ll y=ar[2]-ar[0];
    while(max(x,y)>=2 && min(x,y)>0)
    {
        x=min(x,y);
        y=max(x,y);
        ans+=min(x,y/2);
        x-=min(x,y/2);
        y-=2*min(x,y/2);

    }
    if(x>=2 && y>0)
        ans+=1;
    cout<<ans<<"\n";
}
