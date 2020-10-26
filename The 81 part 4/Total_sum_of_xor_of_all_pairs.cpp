#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int ar[n];

    for(int i=0;i<n;i++)cin>>ar[i];
    int x=0,y=0,res=0;

    for(int i=0;i<=31;i++)
    {
        x=0,y=0;
       for(int j=0;j<n;j++)
       {
        if(ar[j]&(1<<i))y++;
        else x++;
       }
       res+=(x*y)*pow(2,i);
    }
    cout<<res<<"\n";
}
