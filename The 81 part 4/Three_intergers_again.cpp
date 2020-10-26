#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
   int t;
   cin>>t;
   while(t--)
   {
       ll a,b,c,sum1,sum2;
       cin>>sum1>>sum2;
       c=1;
       a=c+(sum1-sum2);
       b=(sum1-a);
       cout<<a<<" "<<b<<" "<<c<<endl;
   }
}
