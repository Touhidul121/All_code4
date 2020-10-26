#include<bits/stdc++.h>
using namespace std;

int pow1(int a,int n)
{
    int res=1;
    while(n>0)
    {
        if(n&1)
            res=res*a;
        n=n/2;
        a=a*a;
    }
    return res;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int n,x;
        n=s.size();
        int cnt=0;
        for(int i=0;i<n;i++)
            if(s[i]!='0')
            cnt++;
        cout<<cnt<<"\n";
        for(int i=n-1;i>=0;i--)
        {
            if(s[i]=='0')
                continue;
            else
            {
                x=s[i]-'0';

                cout<<x*pow1(10,(n-(i+1)))<<" ";
            }
        }
        cout<<"\n";
    }
}
