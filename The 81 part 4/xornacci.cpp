#include<bits/stdc++.h>
#define ll long long int
using namespace std;

ll xor_fib(int n,int a,int b)
{
    if(n==0)
        return a;
   else if(n==1)
        return b;
    else
        return ((xor_fib(n-1,a,b))^(xor_fib(n-2,a,b)));
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll a,b,n;
        cin>>a>>b>>n;
        cout<<xor_fib(n,a,b)<<endl;
    }
}

