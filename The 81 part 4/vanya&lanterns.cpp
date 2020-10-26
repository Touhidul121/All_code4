#include<bits/stdc++.h>
using namespace std;

int main()
{
    double n,l,a;
    cin>>n>>l;

    vector<double>v,v1;
    for(int i=0;i<n;i++)
    {
        cin>>a;
        v.push_back(a);
    }

    sort(v.begin(),v.end());

    v1.push_back(v[0]-0);
    v1.push_back(l-v[n-1]);

    for(int i=1;i<n;i++)
    {
        v1.push_back((v[i]-v[i-1])/2);
    }

    cout<<fixed<<setprecision(10)<<*max_element(v1.begin(),v1.end())<<"\n";

}

