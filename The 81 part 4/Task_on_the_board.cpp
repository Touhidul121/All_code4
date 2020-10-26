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
        int n,a;
        cin>>n;
        vector<int>b,v1;
        vector<char>v,res(n);
        char x;
        int loc;
        set<char>st,st1;
        for(int i=0;i<s.size();i++)
            st.insert(s[i]);
        for(auto x:st)
            v.push_back(x);

        for(int i=0;i<n;i++)
        {
            cin>>a;
            b.push_back(a);
            st1.insert(a);
        }
        for(auto x:st1)
            v1.push_back(x);
        int m=v.size();

        for(int i=m-1;i>=0;i--)
        {
            x=v[i];
            loc=v1[m-i-1];


            for(int j=0;j<b.size();j++)
            {
                if(b[j]==loc){
                    res[j]=x;

                }
            }

        }
        for(auto x:res)
            cout<<x;
        cout<<"\n";
    }
}
