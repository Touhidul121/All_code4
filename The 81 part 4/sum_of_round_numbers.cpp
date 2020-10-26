#include<bits/stdc++.h>
using namespace std;

int p(int i)
{
    if(i==0)
        return 1;
    else
    {
        int ans=1;
        for(int j=1;j<=i;j++)
            ans*=10;
        return ans;
    }
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;

        vector<int>v;
        int i=0;
        while(n>0)
        {
            v.push_back((n%10)*p(i));
            n=n/10;
            i++;
        }
        int count=0;
        for(int i=0;i<v.size();i++)
            if(v[i]!=0)
            count++;
            cout<<count<<"\n";
        for(int i=0;i<v.size();i++){

            if(v[i]!=0)cout<<v[i]<<" ";
        }
        cout<<"\n";

    }
}
