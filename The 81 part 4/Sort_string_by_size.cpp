#include<bits/stdc++.h>
using namespace std;

bool comp(string a,string b)
{
    if(a.size()!=b.size())
        return a.size()<b.size();
        else
    return a<b;
}
int main()
{
    vector<string>v;
    int n;
    cin>>n;
    string a;
    for(int i=0;i<n;i++)
    {
        cin>>a;
        v.push_back(a);
    }

    sort(v.begin(),v.end(),comp);

    for(auto x:v)
        cout<<x<<" ";
}
