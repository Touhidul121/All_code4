#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll a,b,x,y,flag=0;
        cin>>a>>b;
        x=(a+b);
        y=a-b;
        if(y==1){
        for(ll i=2;i<=sqrt(x);i++)
        {
            if((a+b)%i==0){
                flag++;
                break;
            }
        }
        if(flag>0)
            cout<<"NO"<<endl;
        else
            cout<<"YES"<<endl;
        }
        else
            cout<<"NO"<<endl;
    }
}
