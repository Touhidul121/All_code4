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
            n>>=1;
        }

        cout<<((ll)1<<cnt)<<"\n";

}

