#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n,a;
    cin>>n;
    vector<int>v;

    for(int i=0;i<n;i++)
        cin>>a ,v.push_back(a);
    sort(v.begin(),v.end());

    int x=v[n/2];
    ll ans=0;

    for(int i=0;i<n;i++)
    {
        ans+=abs(x-v[i]);
    }
    cout<<ans<<"\n";
}
