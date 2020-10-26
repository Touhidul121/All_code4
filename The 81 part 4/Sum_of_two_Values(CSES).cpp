#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n,a;
    ll x;
    cin>>n>>x;
    vector<pair<int,int>>v;
    for(int i=1;i<=n;i++)
    {
        cin>>a;
        v.push_back({a,i});
    }
    sort(v.begin(),v.end());

    int i=0,j=n-1;
    while(i<j)
    {
        ll y=v[i].first+v[j].first;
        if(y==x)
        {
            cout<<v[i].second<<" "<<v[j].second<<"\n";
            return 0;
        }
        else if(y>x)
            j--;
        else
            i++;
    }
    cout<<"IMPOSSIBLE"<<"\n";
}
