#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

ll mx(ll a)
{
    int m=0;
    while(a>0)
    {
        if(m<=a%10)
            m=a%10;
        a/=10;
    }
    return m;
}

ll mn(ll a)
{
    int m=9;
    while(a>0)
    {
        if(m>=a%10)
            m=a%10;
        a/=10;
    }
    return m;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll a,k;
        cin>>a>>k;
        for(int i=2;i<=k;i++)
        {
            a=a+mx(a)*mn(a);
            if(mn(a)==0)
                break;

        }
        cout<<a<<"\n";

    }
}
