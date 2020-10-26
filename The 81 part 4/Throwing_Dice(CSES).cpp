#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll ar[6]={1,2,4,8,16,32};
ll I[6][6]={{1,0,0,0,0,0},
            {0,1,0,0,0,0},
            {0,0,1,0,0,0},
            {0,0,0,1,0,0},
            {0,0,0,0,1,0},
            {0,0,0,0,0,1}};

ll T[6][6]={{1,1,1,1,1,1},
            {1,0,0,0,0,0},
            {0,1,0,0,0,0},
            {0,0,1,0,0,0},
            {0,0,0,1,0,0},
            {0,0,0,0,1,0}};
const ll mod = 1e9+7;


void mul(ll A[6][6],ll B[6][6],ll dim)
{
   ll res[dim+1][dim+1];
   for(int i=0;i<6;i++)
   {
       for(int j=0;j<6;j++)
       {
           res[i][j]=0;
           for(int k=0;k<6;k++)
           {
               ll x=(A[i][k]*B[k][j])%mod;
               res[i][j]=(res[i][j]+x)%mod;
               if(res[i][j]>=mod)res[i][j]%=mod;
           }
       }
   }

   for(int i=0;i<dim;i++)
    for(int j=0;j<dim;j++)
    A[i][j]=res[i][j];
}


ll getfib(int n)
{



    while(n)
    {
        if(n&1)
        {
            mul(I,T,6);n--;
        }
        n=n>>1;
        mul(T,T,6);
    }

     for(int i=0;i<6;i++){
        for(int j=0;j<6;j++)
        {
            cout<<I[i][j]<<" ";
        }
        cout<<"\n";
     }


return I[0][0];

}
int main()
{
        ll n;
        cin>>n;
        cout<<getfib(n)<<"\n";



}
