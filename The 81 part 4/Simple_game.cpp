#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
int main()
{
  ll n,m;
  cin>>n>>m;
  if(n==1)
    cout<<1<<"\n";
  else{
  if(m<=n/2)
        cout<<m+1<<"\n";
  else
    cout<<m-1<<"\n";
  }
}
