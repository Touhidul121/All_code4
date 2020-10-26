#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,a,c4=0,c3=0,c2=0,c1=0,ans=0,rest2=0,rest1=0,x;
    cin>>n;



    for(int i=0;i<n;i++)
    {
        cin>>a;
        if(a==4)
            c4++;
        else if(a==3)
            c3++;
        else if(a==2)
            c2++;
        else
            c1++;

    }


//cout<<c1<<" "<<c2<<" "<<c3<<" "<<c4<<endl;
    ans+=c4;
    ans+=(c2/2);
    int pair1=(c2/2);
    if(c2&1)
    {
        rest2=c2-2*pair1;
    }
x=min(c1,c3);
    ans+=x;
    c1=c1-x;
    c3=c3-x;
    //cout<<ans<<" "<<c1<<" "<<c3<<endl;
    if(c3>c1){
        ans+=c3;
    }
    else
    {

        if(c1>=4)
            ans+=c1/4;
        rest1=c1%4;
    }
    //cout<<ans<<endl;
    while(rest1>1&&rest2>0)
    {
        ans++;
        rest1-=2;
        rest2--;
    }
    //cout<<rest1<<" "<<rest2<<endl;
    if((rest1>0&&rest2>0)&&rest1+rest2<=3)
        ans+=1;
    else{
    if(rest2&1)
    {
        ans+=(rest2/2)+1;
    }
    else
        ans+=rest2/2;
    if(rest1%4==0)
        ans+=rest1/4;
    else
        ans+=(rest1/4)+1;
    }
cout<<ans<<endl;
}
