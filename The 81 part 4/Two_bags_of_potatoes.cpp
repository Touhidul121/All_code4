#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll y,k,n,flag=0,i=1,x;
    cin>>y>>k>>n;


if(n-y<k-y%k)

    cout<<-1<<endl;
    else{
    i=k-(y%k);
     while(y+i<=n)
     {
         cout<<i<<" ";
         i=k+i;

     }
    }





}
