#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,v,flag=0;
    cin>>n>>v;
    int count=0,cost=0;
    cost=1*v;

    if(cost>=n-1)
        cout<<n-1<<endl;
    else
    {
        for(int i=2;i<=n-v;i++)
        {
            cost+=i;
        }
    cout<<cost<<endl;
    }
}
