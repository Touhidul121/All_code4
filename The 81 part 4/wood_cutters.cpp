#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n,a,b;
    cin>>n;
    vector<pair<ll,ll>>v;
    for(int i=0;i<n;i++)
    {
        cin>>a>>b;
        v.push_back({a,b});
    }
    sort(v.begin(),v.end());
    if(n<=2)
        cout<<n<<"\n";
    else
    {
        ll prev_start=v[0].first;
        ll ans=1;
        for(int i=1;i<n-1;i++)
        {
            ll nstart=v[i].first;
            ll nend=v[i].first-v[i].second;
            ll mstart=v[i].first;
            ll mend=v[i].first+v[i].second;
            ll next_start=v[i+1].first;
            if(nend>prev_start)
            {
                ans++;prev_start=nstart;
            }
            else if(mend<next_start)
            {
                ans++;prev_start=mend;
            }
            else prev_start=nstart;
        }
        ans++;
        cout<<ans<<"\n";
    }
}
