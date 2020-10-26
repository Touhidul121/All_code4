#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
int main()
{
    ll n,a;

    cin>>n;
    ll v[n];
    vector<ll>v1;
    for(ll i=0;i<n;i++)
    {
        cin>>v[i];
    }
    ll previous_best=0,mx=INT_MIN,prev=0;
    for(int i=0;i<n;i++)
    {
        previous_best=previous_best+v[i];
        if(previous_best<v[i]){

            previous_best=v[i];

        }

        v1.push_back(previous_best);// if(mx<prvious_best)
                                       //mx=previous_best  // aivabe max nirnoy korle vector lagbe na
    }

    ll res=*max_element(v1.begin(),v1.end());
    cout<<res<<"\n";
    return 0;
}

