#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,a,cnt=0;
        cin>>n;
        vector<int>v;
        for(int i=0;i<n;i++)
        {
            cin>>a;
            if(a==1)
                cnt++;
                v.push_back(a);

        }
        if(cnt==n)
        {
            if(n&1)
                cout<<"First"<<"\n";
            else
                cout<<"Second"<<"\n";
        }
        else
        {
            cnt=0;
            int i=0;
            while(v[i]==1&&i<n)
            {
                i++;
                cnt++;
            }
            if(cnt%2==0)
                cout<<"First"<<"\n";
            else
                cout<<"Second"<<"\n";
        }
    }
}
