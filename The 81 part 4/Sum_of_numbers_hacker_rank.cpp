#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,a,sum;
        cin>>n;
        vector<int>v;
        for(int i=0;i<n;i++)
        {
            cin>>a;
            v.push_back(a);
        }
        cin>>sum;
        int sum1=0;
        bool f=false;
        for(int i=0;i<pow(2,n);i++)
        {
            sum1=0;
            for(int j=0;j<n;j++)
            {
                if(i&(1<<j))
                    sum1+=v[j];
            }
            if(sum1==sum)
            {
                f=true;
                break;
            }
        }
        if(f)
            cout<<"YES"<<"\n";
        else
            cout<<"NO"<<"\n";
    }
}
