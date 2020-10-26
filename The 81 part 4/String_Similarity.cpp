#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string s,x="";
        cin>>s;
        if(s[n-1]=='0')
        {
            x=string(n,'0');
        }
        else
            x=string(n,'1');
        cout<<x<<"\n";
    }
}
