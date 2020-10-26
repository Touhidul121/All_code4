#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,a;
    cin>>n;
    int cnt1=0,cnt2=0,cnt3=0,cnt4=0,cnt6=0;

    for(int i=0;i<n;i++)
    {
        cin>>a;
        if(a==1)
            cnt1++;
        else if(a==2)
            cnt2++;
        else if(a==3)
            cnt3++;
        else if(a==4)
            cnt4++;
        else if(a==6)
            cnt6++;
    }
    int ans=0;

    int x,y,z;
    x=min(cnt1,min(cnt2,cnt4));
    ans+=x;
    cnt1-=x;
    cnt2-=x;
    y=min(cnt1,min(cnt3,cnt6));
    ans+=y;
    cnt1-=y;
    cnt6-=y;
    z=min(cnt1,min(cnt2,cnt6));

    if(ans==0||3*(x+y+z)!=n)
        cout<<-1<<endl;
    else
    {
        if(x+y+z<=n/3){
        for(int i=1;i<=x;i++)
        {
            cout<<"1 2 4"<<endl;
        }
        for(int i=1;i<=z;i++)
        {
            cout<<"1 2 6"<<endl;
        }
        for(int i=1;i<=y;i++)
        {
            cout<<"1 3 6"<<endl;
        }
        }
        else
        {
            int j=0;
            while(j<=n/3)
            {
            for(int i=1;i<=x;i++)
        {
            cout<<"1 2 4"<<endl;
        }
        for(int i=1;i<=z;i++)
        {
            cout<<"1 2 6"<<endl;
        }
        for(int i=1;i<=y;i++)
        {
            cout<<"1 3 6"<<endl;
        }
        j+=3;
            }
        }
    }
}
