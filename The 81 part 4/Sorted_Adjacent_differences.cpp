#include<bits/stdc++.h>
#define ll long long int
using namespace std;


int main()
{
    ll t;
    cin>>t;
    while(t--){
    ll n,a;
    cin>>n;

vector<int>v1,v2;

    for(int i=0;i<n;i++)
    {
        cin>>a;
        if(a>=0)
        v1.push_back(a);
        else
        {
            v2.push_back(a);
        }
    }

sort(v1.begin(),v1.end());
sort(v2.rbegin(),v2.rend());

for(int i=0;i<v1.size();i++)
    cout<<v1[i]<<" ";
for(int i=0;i<v2.size();i++)
    cout<<v2[i]<<" ";
cout<<endl;
    }
}
