#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin>>t;
    while(t--)
    {
        double n;
        cin>>n;
        n=2*n;
        double theta=(360/n)/2;
        double radian=(acos(-1)*theta)/180;
        double ans=(.5)/tan(radian);
        ans=ans*2;
        cout<<fixed<<setprecision(20)<<ans<<"\n";

    }
}
