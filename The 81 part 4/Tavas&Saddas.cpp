#include<bits/stdc++.h>
using namespace std;

int main()
{


    string n;
    cin>>n;

    vector<int>v;

    for(int i=0;i<n.size();i++)
    {
        if(n[i]=='4')
            v.push_back(0);
        else
            v.push_back(1);
    }
    int j=0,bin_value=0,prev=0;
    for(int i=v.size()-1;i>=0;i--)
    {
        bin_value+=(1<<j)*v[i];
        j++;
    }

    // all are repeated permutation so pow(m,n) here m=2
    int l=v.size()-1;
    for(int i=1;i<=l;i++)
    {
        prev+=(1<<i);
    }


    cout<<prev+bin_value+1<<"\n";
}
