#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,socs,count=0;
    cin>>n>>m;

    socs=n;

    while(socs>0)
    {
        socs--;
        count++;
        if(count%m==0)
        {
            socs++;
        }
    }
    cout<<count<<endl;
}
