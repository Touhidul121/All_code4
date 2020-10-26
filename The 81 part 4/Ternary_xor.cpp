#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string c,a,b;
        cin>>c;
        bool f1=false;
        for(int i=0;i<n;i++)
        {
            if(c[i]=='2'&& !f1)
            {
                a+='1';
                b+='1';
            }
            if(c[i]=='2'&&f1)
            {
                a+='0';
                b+='2';
            }
             if(c[i]=='0')
            {
                a+='0';
                b+='0';
            }
             if(c[i]=='1')
            {
                if(!f1)
                {
                    a+='1';
                    b+='0';
                    f1=true;
                }
                else
                {
                    a+='0';
                    b+='1';
                }
            }
        }
        cout<<a<<"\n"<<b<<"\n";
    }
}
