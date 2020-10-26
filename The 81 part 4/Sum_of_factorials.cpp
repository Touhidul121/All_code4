#include<bits/stdc++.h>
using namespace std;

typedef long long ll;


int main()
{
   ll t;
   cin>>t;
   for(ll tc=1;tc<=t;tc++)
   {
       ll n;
       cin>>n;
       ll fact[25];


       fact[0]=1;
       for(ll i=1;i<=20;i++)
        fact[i]=fact[i-1]*i;

       stack<ll>stk;
       for(ll i=20;i>=0;i--)
       {
         if(fact[i]<=n)
         {
             n-=fact[i];
             stk.push(i);
         }
       }
       cout<<"Case "<<tc<<": ";
       if(n==0)

       {

         while(stk.size()!=1)
           {
               cout<<stk.top()<<"!+";
               stk.pop();
           }
           cout<<stk.top()<<"!\n";
           stk.pop();
       }
       else
        cout<<"impossible"<<"\n";
   }
}
