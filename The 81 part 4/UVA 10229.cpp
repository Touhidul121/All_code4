#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int mod;

struct matrix
{
    long long x[2][2];

    matrix()
    {

    }

    void init()
    {
        memset(x,0,sizeof(x));
        for(int i=0;i<2;i++)
            x[i][i]=1;
    }
}aux;

void mult(matrix &m,matrix &m1,matrix &m2)
{
    memset(m.x,0,sizeof(m.x));
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            for(int k=0;k<2;k++)
                m.x[i][k]=(m.x[i][k]+m1.x[i][j]*m2.x[j][k])%mod;
        }
    }
}

matrix pow(matrix &mo,int n)
{
    matrix ret;
    ret.init();

    if(n==0)
        return ret;
    if(n==1)
        return mo;
    matrix p=mo;

    while(n!=0)
    {
        if(n&1)
        {
            aux=ret;
            mult(ret,aux,p);
        }
    }
    n>>=1;
    aux=p;
    mult(p,aux,aux);
}
