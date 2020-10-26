#include<stdio.h>

long long  b[10000007];
long long v[10000007];
void sieve(int n)
{
    for(long long i=4;i<=n;i+=2)
        b[i]=1;
    for(long long i=3;i*i<=n;i+=2)
    {
        if(b[i]==0){
        for(int j=i*i;j<=n;j+=i)
        {
            b[j]=1;
        }
        }
    }
    long long k=0;
    for(long long i=2;i<=n;i++)
    {
        if(b[i]==0){
            v[k++]=i;
        }
    }
}
int main()
{

 sieve(10000007);
 long long n;
 scanf("%lld",&n);
 printf("%lld\n",v[n-1]);
}

