#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n=5;
    int a[n]={1,5,2,9,3};
    vector<int>pref(n+1);
    for(int i=0;i<n;i++)
        pref[i+1]=pref[i]+a[i];
    for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
    cout<<"\n";
    for(int i=0;i<n;i++)
    {
     for(int j=i+1;j<n;j++)
            cout<<pref[j+1]-pref[i]<<" ";
    cout<<"\n";
    }
}
