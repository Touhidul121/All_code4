#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);

    int t;
    cin>>t;
    while(t--)
    {
        double a,b;
        cin>>a>>b;
        double x=max(a,b)-min(a,b);
        ll ans=(ll)ceil(x/10.0);
        cout<<ans<<"\n";
    }
}
