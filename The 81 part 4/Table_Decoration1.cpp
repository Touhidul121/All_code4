#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);

    ll ar[3];
    cin>>ar[0]>>ar[1]>>ar[2];

    sort(ar,ar+3);
    ll result=(ar[0]+ar[1]+ar[2])/3;

    if(result>ar[0]+ar[1])result=ar[0]+ar[1];

    cout<<result<<"\n";
}
