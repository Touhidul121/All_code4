#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;

    if(n>m+1 || m>2*(n+1))
        cout<<-1<<"\n";
    else
    {
        if(n==m+1)
        {
            for(int i=0;i<m;i++)
                cout<<"01";
            cout<<"0";
            cout<<"\n";
        }
        else if(n==m)
        {
            for(int i=0;i<n;i++)
                cout<<"01";
        }
        else
        {
            int max1=2*(n+1);
            int diff=max1-m;

            string s;
            for(int i=0;i<n;i++)
                s+="110";
            s+="11";

            int k=0;
            for(int i=0;i<s.size();i+=3)
            {
                if(diff==0)
                    break;
                else
                {
                    s[i]=' ';
                }
                diff--;


            }


            for(int i=0;i<s.size();i++)
            {
                if(s[i]!=' ')
                    cout<<s[i];
            }

        }
    }
}
