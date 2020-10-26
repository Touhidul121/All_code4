#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
   int count=0;
   int total=0;
    for(int i=0;i<s.size();i++)
    {
     if(s[i]==')')
            count++;
     else{
            if(count!=0)
     {
         count--;
         total+=2;
     }
    }
    }
    if(total==0)
        cout<<-1<<endl;
    else
    cout<<total<<endl;
}

