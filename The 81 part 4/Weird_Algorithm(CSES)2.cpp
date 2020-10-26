#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);

    ll n;
    cin>>n;

    while(true)
    {
        cout<<n<<" ";
        if(n==1)break;
        else
        {
            if(n&1)n=3ll*n+1ll;
            else n=n/2;
        }
    }
}
