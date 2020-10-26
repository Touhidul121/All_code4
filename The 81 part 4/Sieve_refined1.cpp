#include<bits/stdc++.h>
using namespace std;

void sieve(int n)
{
    vector<int>v(n+1,0);
    v[0]=v[1]=1; // 1 means not prime , 0 means prime

    for(int i=2;i*i<=n;i++)
    {
        if(v[i]==0)
        {
          for(int j=2*i;j<=n;j+=i)
          {
              v[j]=1;
          }
        }
    }
    for(int i=1;i<=n;i++)
    {
        if(v[i]==0)
            cout<<i<<" ";
    }
}
int main()
{
    sieve(100);
}
