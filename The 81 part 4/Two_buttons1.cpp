#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b;
    cin>>a>>b;
    if(a>b)
        cout<<a-b<<"\n";
    else
    {
        int ans=0;
        if(b&1)
        {
            b++;
            ans++;
        }
        while(b>a)
        {
            b=b/2;
            ans++;
            if(b==a)
                break;
            if(b&1)
            {
                b++;
                ans++;
            }
            if(b==a)
                break;
        }
        if(b!=a)
            ans+=(a-b);
        cout<<ans<<"\n";
    }
}
