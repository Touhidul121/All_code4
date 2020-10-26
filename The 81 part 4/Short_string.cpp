#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string a,s;
        cin>>a;
        s+=a[0];
        int n=a.size();
        for(int i=1;i<n-1;i+=2)
            s+=a[i];
        s+=a[n-1];
        cout<<s<<"\n";
    }
}
