#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
 ll n,d,m,count=0,prev=0,next=0;
 cin>>n>>m;
 ll a[m+1];
 a[0]=1;

 for(int i=1;i<m+1;i++)

{
  cin>>a[i];
}
for(int i=0;i<m;i++)
{
    prev=a[i];
    next=a[i+1];
    if(next>=prev)
        count+=(next-prev);
    else
    {
        count+=(n-prev)+(next-0);
    }
}
cout<<count<<endl;
}
