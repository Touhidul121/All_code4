#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    int n,k,x,r;
    cin>>n>>k;
    set<int>st;
    deque<int>dk;

   vector<int>v(n);
   for(int i=0;i<n;i++)
    cin>>v[i];

   for(int i=0;i<n;i++)
   {
       x=v[i];
       if(st.find(x)!=st.end())
        continue;
       if(st.size()==k){
            r=dk.back();
            dk.pop_back();
       st.erase(r);
       }

       if(st.count(x)==0 && st.size()<k){
        st.insert(x);
        dk.push_front(x);
       }

   }
   cout<<dk.size()<<"\n";
   for(auto x:dk)
    cout<<x<<" ";
   cout<<"\n";

}
