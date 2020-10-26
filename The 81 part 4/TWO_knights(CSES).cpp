#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

ll getans(ll n)
{
    ll x=(n*n)*(n*n-1);

    return x;
}
int main()
{
  ll n;
  cin>>n;
    for(int i=1;i<=n;i++)
    {
        cout<<(getans(i)/2 )- (4*(i-1)*(i-2))<<"\n";
    }
}
