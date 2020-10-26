#include<bits/stdc++.h>
using namespace std;

int main()
{
 int t;
 cin>>t;
 while(t--)
 {
     int n,k,v;
     cin>>n>>k;
     vector<int>a,b;
     for(int i=0;i<n;i++)
     {
         cin>>v;
         a.push_back(v);

     }
     for(int i=0;i<n;i++)
     {
         cin>>v;
         b.push_back(v);

     }
     sort(a.begin(),a.end());
     sort(b.begin(),b.end());

     int j=0;
     for(int i=0;i<k;i++)
     {
       if(a[i]<b[n-1-j])
       {
           swap(a[i],b[n-1-j]);
           j++;
       }
     }
     int sum=0;
     for(int i=0;i<n;i++)
     {
         sum+=a[i];
     }
     cout<<sum<<"\n";

 }
}
