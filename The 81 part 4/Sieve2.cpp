#include<bits/stdc++.h>
using namespace std;
bool prime[100000];
void sieve(int n)
{

    for(int i=4;i<=n;i+=2)
        prime[i]=true;
    for(int i=3;i*i<=n;i+=2)
    {
        for(int j=i*i;j<=n;j+=i)
            prime[j]=true;
    }
    for(int i=2;i<=n;i++)
        if(prime[i]==false)
        cout<<i<<" ";
    cout<<"\n";
}

int main()
{
    sieve(100000);
}
