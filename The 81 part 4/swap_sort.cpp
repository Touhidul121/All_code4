#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);

    int n,a;
    cin>>n;
    vector<int>v;
    for(int i=0;i<n;i++)cin>>a , v.push_back(a);

    int i=0;
    while(i<n)
    {
        if(v[i]!=v[v[i]-1])
            swap(v[i],v[v[i]-1]);
        else
            i++;
    }
    for(int i=0;i<n;i++)
    {
        if(i+1!=v[i])
        {
            cout<<"duplicate no = "<<v[i]<<"\n";
            cout<<"Missing number = "<<i+1<<"\n";
            cout<<"------------------"<<"\n";
        }
    }
}
