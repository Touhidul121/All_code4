#include<bits/stdc++.h>
using namespace std;
bool isSubsequence(string s,string t)
{
    int i=0,j=0;
    while(i<s.size())
    {
        if(s[i]==t[j])
            j++;
        if(j==t.size())return true;
        i++;
    }
    return false;
}

bool isAlpresent(string s,string t)
{
    map<char,int>mp1,mp2;
    for(int i=0;i<s.size();i++)
        mp1[s[i]]++;
    for(int i=0;i<t.size();i++)
        mp2[t[i]]++;

    for(auto x:mp2)
    {
        if(mp2[x.first]>mp1[x.first])
            return false;
    }
    return true;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);

    string s,t;
    cin>>s>>t;
    if(s.size()>t.size())
    {
        if(isSubsequence(s,t))
            cout<<"automaton"<<"\n";
        else{
        if(isAlpresent(s,t))
            cout<<"both"<<"\n";
            else cout<<"need tree"<<"\n";
        }
    }
    else if(s.size()<t.size())
        cout<<"need tree"<<"\n";
    else if(s.size()==t.size())
    {
        if(isAlpresent(s,t))
            cout<<"array"<<"\n";
        else cout<<"need tree"<<"\n";
    }
}
