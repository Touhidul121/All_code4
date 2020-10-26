#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    char s[n+5][n+5];
    set<char>st,st1;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
            cin>>s[i][j];

    }


char x=s[0][0];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i==j||j==n-1-i)
            {
                st.insert(s[i][j]);
            }
             else
            {

                st1.insert(s[i][j]);
            }
        }
    }

    if(st.size()==1&&st1.size()==1&&*st1.begin()!=x)
        cout<<"YES"<<"\n";
    else
        cout<<"NO"<<"\n";
}
