#include<bits/stdc++.h>
using namespace std;
bool isPrime(int x)
{
    for(int i=2;i*i<=x;i++)
    {
        if(x%i==0)
            return false;
    }
    return true;
}
int main()
{
    int n;
    cin>>n;
    bool f=false;
    vector<int>res(n+2,1);
    for(int i=2;i*i<=n+1;i++)
    {
        if(isPrime(i))
        {

            for(int j=i*i;j<=n+1;j+=i)
                res[j]=2;
        }
    }
    if(n==1)
        cout<<1<<"\n"<<1<<"\n";
    else
        if(n==2)
    {
        cout<<1<<"\n";
        cout<<1<<" "<<1<<"\n";
    }
    else{
            cout<<2<<"\n";
    for(int i=2;i<=n+1;i++)
        cout<<res[i]<<" ";
    }
}
