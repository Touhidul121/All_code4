#include<bits/stdc++.h>
using namespace std;

int main()
{

    string s,t;
    cin>>s>>t;
    int x=t[0]-s[0];
    int y=t[1]-s[1];
    cout<<max(abs(x),abs(y))<<"\n";
    while(x||y)
    {
        if(x>0)
        {
            cout<<"R";
            x--;
        }
        if(x<0)
        {
            cout<<"L";
            x++;
        }
        if(y>0)
        {
            cout<<"U";
            y--;
        }
        if(y<0)
        {
            cout<<"D";
            y++;
        }
        cout<<"\n";
    }
}
