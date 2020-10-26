#include<bits/stdc++.h>
#define ll long long int
using namespace std;
bool isPrime(int n)
{
    ll count=0;
    for(int i=2;i*i<=n;i++)
    {
        if(n%i==0)
            count++;
    }
    if(count)
        return false;
    else
        return true;
}

int main()
{

    ll n;
    cin>>n;


    if(isPrime(n))
        cout<<1<<endl;
    else if(n%2==0)
        cout<<2<<endl;
        else
        {
            if(isPrime(n-2))
                cout<<2<<endl;
            else
                cout<<3<<endl;
        }
}

