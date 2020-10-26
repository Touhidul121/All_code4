#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,t,x,y,sum1=0,count1=0,sum2=0,count2=0;
    cin>>n;

    for(int i=0;i<n;i++)
    {
        cin>>t>>x>>y;
        if(t==1)
        {
            count1++;
            sum1+=x;
        }
        else
        {
            count2++;
            sum2+=x;
        }
    }
    if(sum1>=(count1*10)/2)
        cout<<"LIVE"<<endl;
    else
        cout<<"DEAD"<<endl;
    if(sum2>=(count2*10)/2)
        cout<<"LIVE"<<endl;
    else
        cout<<"DEAD"<<endl;
}
