#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,a,ans=0;
    cin>>n;

    for(int i=0;i<n;i++)
    {
        cin>>a;
        --a;
        ans+=a;
        //cout<<ans<<"\n";
        if(ans&1)
            cout<<1<<"\n";
        else
            cout<<2<<"\n";
    }
}
