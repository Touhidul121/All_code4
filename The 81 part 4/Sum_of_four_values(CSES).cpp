#include<bits/stdc++.h>
using namespace std;
#define ar array
const int mxN = 1e3;
int v[mxN];
int main()
{
   ios_base::sync_with_stdio(false);
   cin.tie(0);

   int n,x;
   cin>>n>>x;

   for(int i=0;i<n;i++)
        cin>>v[i];
   unordered_map<int,ar<int,2>>mp;
   mp.reserve(1<<20);
   for(int i=0;i<n-1;i++)
   {
       for(int j=i+1;j<n;j++)
       {
           if(mp.find(x-v[i]-v[j])!=mp.end())
           {
               ar<int,2> p=mp[x-v[i]-v[j]];
               cout<<i+1<<" "<<j+1<<" "<<p[0]+1<<" "<<p[1]+1<<"\n";
               return 0;
           }
       }
       for(int j=0;j<i;j++)
       mp[v[i]+v[j]]={i,j};
   }
   cout<<"IMPOSSIBLE"<<"\n";
}
