#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    string s;
    if(n>m+1|| m>2*(n+1))
        cout<<-1<<"\n";
    else
    {
        if(n>m)
        {
            for(int i=0;i<m;i++)
                cout<<"01";
            cout<<"0";
        }
       else if(n==m)
        {
            for(int i=0;i<n;i++)
                cout<<"01";
        }
        else
        {
            for(int i=0;i<n;i++)
                s+="110";
            s+="11";
            if(m==2*(n+1))
                cout<<s<<"\n";
            else if(m==2*(n+1)-1){
                s.pop_back();
                cout<<s<<"\n";
            }
            else if(m==2*(n+1)-2)
            {
                s.pop_back();
                s.pop_back();
                cout<<s<<"\n";
            }
            else if(m==2*(n+1)-2)
            {
                for(int i=1;i<s.size()-2;i++)
                    cout<<s[i];
                cout<<"\n";
                for(int i=2;i<s.size()-2;i++)
                    cout<<s[i];
                cout<<"\n";
            }

        }
    }
}
