#include<bits/stdc++.h>
using namespace std;


int main()
{
    string s,t,r;
    cin>>s>>t;
map<char,int>mp1,mp2;
    for(int i=0;i<s.size();i++)
        mp1[s[i]]++;
    for(int i=0;i<t.size();i++)
        mp2[t[i]]++;

    for(int i=0;i<t.size();i++)
    {
        if(mp1[t[i]]<mp2[t[i]])
        {
            cout<<"need tree"<<"\n";
            return 0;
        }
    }
        int i=0,j=0;
        bool flag1=false;
        while(i<s.size()&&j<t.size())
        {
            if(s[i]==t[j])
            {

                j++;
            }
            if(j==t.size())
            {
                flag1=true;
                break;
            }
            i++;
        }
        if(flag1)
            cout<<"automaton"<<"\n";
        else{
           if(s.size()==t.size())
            cout<<"array"<<"\n";
           else
            cout<<"both"<<"\n";
        }
    }

