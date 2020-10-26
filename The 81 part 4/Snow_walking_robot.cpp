#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s,s1;
        cin>>s;
        int lr=0,ud=0;
        map<char,int>mp;
        for(int i=0;i<s.size();i++)
            mp[s[i]]++;
            lr=min(mp['L'],mp['R']);
            ud=min(mp['U'],mp['D']);
            if(ud==0&&lr>0)
            {
                cout<<2<<"\n";
              cout<<"LR"<<"\n";
            }
            else if(lr==0 && ud>0)
            {
                cout<<2<<"\n";
                cout<<"UD"<<"\n";
            }
            else if(lr>0 && ud>0){
            cout<<(2*lr)+(2*ud)<<"\n";
            s1+=string(lr,'L');
            s1+=string(ud,'U');
            s1+=string(lr,'R');
            s1+=string(ud,'D');
            cout<<s1<<"\n";
            }
            else
                cout<<0<<"\n";
    }
}
