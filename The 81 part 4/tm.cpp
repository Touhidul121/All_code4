#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
int main()
{
 ll t;
 cin>>t;
 while(t--)
 {
     ll a,b;
cin>>a>>b;
     if(a==b)
        cout<<0<<"\n";
     else if(a>b)
     {
         if(a%b!=0)
            cout<<-1<<"\n";
         else{
         ll cnt=0;
         ll n=a/b;
         if(n%8==0){
         while(n/8>0)
         {
             cnt++;
             n=n/8;

         }
         }
         if(n%4==0){
         while(n/4>0)
         {
             cnt++;
             n/=4;
         }
         }
         if(n%2==0){
         while(n/2>0)
         {
             cnt++;
             n/=2;
         }
         }
         if(cnt==0)
            cout<<-1<<"\n";
         else{
         cout<<cnt<<"\n";
         }
     }
     }
     else
     {
         if(b%a!=0)
            cout<<-1<<"\n";
         else{
         ll cnt1=0;
         ll n=b/a;
         if(n%8==0){
         while(n/8>0)
         {
             cnt1++;
             n=n/8;
         }
         }
         if(n%4==0){
         while(n/4>0)
         {
             cnt1++;
             n/=4;
         }
         }
         if(n%2==0){
         while(n/2>0)
         {
             cnt1++;
             n/=2;
         }
         }
         if(cnt1==0)
            cout<<-1<<"\n";
         else
         cout<<cnt1<<"\n";
     }
 }
} }

