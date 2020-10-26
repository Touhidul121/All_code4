#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x,y,z;
        cin>>x>>y>>z;
        vector<int>v;
        v.push_back(x);v.push_back(y);v.push_back(z);
        sort(v.begin(),v.end());
        if(v[1]!=v[2])
            cout<<"NO"<<"\n";
        else
        {
            cout<<"YES"<<"\n";
            cout<<v[0]<<" "<<v[0]<<" "<<v[2]<<"\n";
        }
    }
}
