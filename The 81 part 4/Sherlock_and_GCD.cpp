#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);

    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int>v(n);

        for(int i=0;i<n;i++)
        {
         cin>>v[i];
        }
        int gcd=0;

        for(int i=0;i<n;i++)
        {
            gcd=__gcd(gcd,v[i]);
        }
            if(gcd==1)cout<<"YES"<<"\n";
            else cout<<"NO"<<"\n";

    }
}
