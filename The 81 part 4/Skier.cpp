#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;

        set<pair<int,int>>st;
        pair<int,int>p;

        int xx=0,yy=0,x=0,y=0,total=0;

        for(int i=0;i<s.size();i++)
        {
            xx=x;
            yy=y;
            if(s[i]=='E')
                x++;
            if(s[i]=='W')
                x--;
            if(s[i]=='N')
                y++;
            if(s[i]=='S')
                y--;

            p=make_pair(xx+x,yy+y);

            if(st.find(p)==st.end())
            {
              total+=5;
              st.insert(p);
            }
            else
                total+=1;

        }
        cout<<total<<"\n";
    }
}
