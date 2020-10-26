#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
const int maxN = 2e5;
#define ar array
ar<int,2> v[maxN];
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    ll n,x;
    cin>>n>>x;

    for(int i=0;i<n;i++)
        cin>>v[i][0],v[i][1]=i+1;
    sort(v,v+n);

    for(int i=0;i<n;i++)
    {
        ll x1=x-v[i][0];
        ll j=i+1,k=n-1;
        while(j<k)
        {
            if(v[j][0]+v[k][0]==x1)
            {
                cout<<v[i][1]<<" "<<v[j][1]<<" "<<v[k][1]<<"\n";
                return 0;
            }
            if(v[j][0]+v[k][0]>x1)
                k--;
            else
                j++;
        }
    }
    cout<<"IMPOSSIBLE"<<"\n";
}
