#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,a,sum=0;
    cin>>n;
    vector<int>v;
    for(int i=0;i<n;i++)
    {
        cin>>a;
        v.push_back(a);
    }

    sort(v.begin(),v.end());

    for(int i=0;i<n-1;i+=2)
    {
        if(v[i]!=v[i+1])
        {
            sum+=v[i+1]-v[i];
        }

    }
    cout<<sum<<endl;
}
