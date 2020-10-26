#include<bits/stdc++.h>
using namespace std;



int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        int n,a;
        cin>>n;
        vector<int>v,v2;

        for(int i=0;i<n;i++)
        {
            cin>>a;
            v.push_back(a);
            v2.push_back(a);
        }
        bool f1=false,f2=false;
        for(int i=0;i<n;i++)
        {
            cin>>a;
            if(a==0)
            {
                f1=true;
            }
            else
                f2=true;

        }
        sort(v2.begin(),v2.end());
        if(f1&&f2)
        {
            cout<<"Yes"<<"\n";
        }
        else
        {
            if(v2==v)
                cout<<"Yes"<<"\n";
            else
                cout<<"No"<<"\n";
        }
    }
}
