#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
int main()
{

        ll n,x;
        cin>>n;
        x=n;
        ll cnt=0;
        while(n)
        {
            if((n&1)==0)
                cnt++;
            n=n>>1;
        }

        if(x&1)
            cout<<cnt+1<<"\n";
        else
            cout<<pow(2,cnt)<<"\n";

}
