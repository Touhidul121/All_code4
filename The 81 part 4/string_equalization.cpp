#include<bits/stdc++.h>
using namespace std;

void fun()
{
    string s,t;
    cin>>s>>t;
    set<char>st;
    bool flag=false;
    for(int i=0;i<t.size();i++)
    {
        st.insert(t[i]);

    }
    for(int i=0;i<s.size();i++)
    {
        if(st.find(s[i])!=st.end())
        {
            flag=true;
            break;
        }
    }
        if(flag)
            cout<<"YES"<<"\n";
        else
            cout<<"NO"<<"\n";
    }

int main()
{
    int q;
    cin>>q;
    while(q--)
    {
        fun();
    }
}
