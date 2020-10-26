#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll a,b,flag=0,flag1=0,x,y,n,flag2=0,flag3=0,p;
    cin>>a>>b;

    if(min(a,b)>max(a,b)/2)
        cout<<a<<" "<<b;
    else
    {

        x=max(a,b);
        y=min(a,b);

//        n=x>>1;
//        n=n/y;
//
//        n=n<<1;
//
//           x=x-n*y;



 if(max(a,b)==a)
    flag2++;
else
    flag3++;

    while(x!=0&&y!=0)
    {

        flag=0,flag1=0;


        if(x>=2*y)
        {


        n=x>>1;
        n=n/y;

        n=n<<1;

           x=x-n*y;
            flag++;
        }
        else if(y>=2*x){

        n=y>>1;
        n=n/x;

        n=n<<1;

           y=y-n*x;
            flag1++;
        }
         if(flag==0&&flag1==0)
            break;
    }
if(flag2)
    cout<<x<<" "<<y;
else if(flag3)
cout<<y<<" "<<x<<endl;
    }
}
