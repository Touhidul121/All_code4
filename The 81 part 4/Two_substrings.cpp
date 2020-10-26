#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
    int n;
    n=s.size();
    int ind1=n;
    n=s.size();
    bool f1=false,f2=false;

    for(int i=0;i<n;i++)
    {
        if(s[i]=='A'&&s[i+1]=='B')
        {
            ind1=i+1;break;
        }
    }
    for(int i=ind1+1;i<n;i++)
    {
        if(s[i]=='B'&&s[i+1]=='A')
        {
            f1=true;break;
        }
    }
    int ind2=n;
    for(int i=0;i<n;i++)
    {
        if(s[i]=='B'&&s[i+1]=='A')
        {
            ind2=i+1;break;
        }
    }
    //cout<<ind1<<"\n";
    for(int i=ind2+1;i<n;i++)
    {
        if(s[i]=='A'&&s[i+1]=='B')
        {
            f2=true;break;
        }
    }
    if(f1 || f2)
        cout<<"YES"<<"\n";
    else
        cout<<"NO"<<"\n";
}
