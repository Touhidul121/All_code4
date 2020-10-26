#include<bits/stdc++.h>
using namespace std;

bool isVowel(char ch)
{
  if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
        return true;
  else
    return false;
}
int main()
{
    string s,t;
    cin>>s>>t;

    int x,y;
    x=s.size();
    y=t.size();

    if(x!=y)
    {
        cout<<"No"<<"\n";
    }
    else
    {
        for(int i=0;i<x;i++)
        {
            if((isVowel(s[i])==true&&isVowel(t[i])==false)||(isVowel(s[i])==false&&isVowel(t[i])==true))
            {
                cout<<"NO"<<"\n";
                return 0;
            }

        }
        cout<<"Yes"<<"\n";
    }
}
