#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);

    int t;
    cin>>t;
    while(t--)
    {
        int n,a;
        cin>>n;
        vector<int>v;
        for(int i=0;i<n;i++)
        {
          cin>>a, v.push_back(a);
        }
        bool f=false;

        int ind1=-1,ind2=-1;
        for(int i=0;i<n;i++)
        {

            if(v[i]==1 && !f)
            {
                ind1=i;f=true;
            }
            if(v[i]==1)
            {
                ind2=i;
            }
        }

        int cnt=0;

        if(ind1==-1)
            cout<<0<<"\n";
        else
        {
            for(int i=ind1;i<=ind2;i++)
                if(v[i]==0)cnt++;

            cout<<cnt<<"\n";
        }

    }
}
