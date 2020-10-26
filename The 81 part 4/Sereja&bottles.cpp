#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,count=0,a,b;
    bool l=true;
    cin>>n;
    vector<int>v,v1;

    for(int i=0;i<n;i++)
    {
        cin>>a>>b;
        v.push_back(a);
        v1.push_back(b);

    }
    for(int i=0;i<n;i++)
    {
        l=true;
        for(int j=0;j<n;j++)
        {
            if((i!=j)&&(v[i]==v1[j]))
            {
                l=false;
            }
        }
        if(l)
        count++;
    }
    cout<<count<<endl;
}
