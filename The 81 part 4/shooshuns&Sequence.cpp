#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,k;
    cin>>n>>k;
    vector<int> v;
    int i,a,x;
    int count=0;

    for(int i=0;i<n;i++)
    {
        cin>>a;
        v.push_back(a);
    }
    x=v[k-1];
    {
        for(int i=k;i<n;i++)
        {
            if(v[i]!=x)
            {
                cout<<-1<<endl;
                return 0;
            }
        }
    }

    for(int i=k-2;i>=0;i--)
    {
        if(v[i]==x)
            count++;
        else
            break;
    }

    count=k-1-count;
    cout<<count<<endl;
    return 0;

}
