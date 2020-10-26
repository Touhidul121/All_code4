#include<bits/stdc++.h>
using namespace std;

 int main()
 {
     int k,w,n;
     cin>>k>>w>>n;
     int cost=0;

     cost=k*(n*(n+1))/2;

     if(w>=cost)
        cout<<0<<endl;
     else
        cout<<cost-w<<endl;
 }
