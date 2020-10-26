#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
    ll n,x,y,a;
    cin>>n>>x>>y;

    if(n%2==0)
    {
        double a=y/2;
        if(x<=a)
        {
            cout<<(ll)(x/1)*n<<endl;
        }
        else
        {
            cout<<(ll)((y*n)>>1)<<endl;
        }
    }
    else
    {
        a=y/2;
        if(x<=a)
        {
            cout<<(ll)(x/1)*n<<endl;

        }
        else
        {
            cout<<(ll)(y*(n-1)>>1)+x<<endl;
        }
    }
    }
}
