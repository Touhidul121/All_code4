#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    for(int tc=1;tc<=t;tc++)
    {
        double AB,AC,BC,m,n;
        cin>>AB>>AC>>BC>>m;
        n=1;

        double ans=sqrt(m)/(sqrt(m+n));
        ans=ans*AB;
        cout<<"Case "<<tc<<": ";
        cout<<fixed<<setprecision(12)<<ans<<"\n";
    }
}
