#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin>>t;
    while(t--)
    {
        int n,a;
        cin>>n;
        vector<int>v;
        for(int i=0; i<n; i++)
            cin>>a, v.push_back(a);

        sort(v.begin(),v.end());
        int f1=false,f2=false;
        set<int>st1,st2;

        for(int i=0; i<n; i++)
        {
            if(i+1<n && v[i]==v[i+1])
            {
                st1.insert(v[i]);
                st2.insert(v[i+1]);
                i++;
            }
            else
                st1.insert(v[i]);
        }
        int mx1=0,mx2=0;
        bool f3=false,f4=false;
        if(st1.size()>0)
        {
            mx1=*st1.rbegin();
            f3=true;
        }
        if(st2.size()>0)
        {
            f4=true;
            mx2=*st2.rbegin();
        }

        int ans1=0,ans2=0;
        int i=0;
        if(f3)
        {
            i=0;
            for(auto x:st1)
            {
                if(i!=x)
                {
                    f1=true;
                    ans1=i;
                    break;
                }
                i++;
            }

            if(!f1)
                ans1=mx1+1;
        }
        else
            ans1=0;
        if(f4)
        {

            i=0;
            for(auto x:st2)
            {
                if(i!=x)
                {
                    f2=true;
                    ans2=i;
                    break;
                }
                i++;
            }
            if(!f2)
                ans2=mx2+1;
        }
        else
            ans2=0;
        cout<<ans1+ans2<<"\n";
    }
}
