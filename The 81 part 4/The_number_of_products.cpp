#include<bits/stdc++.h>
#define ll long long int
using namespace std;


int main()
{
    int n;
  cin>>n;
  int a[n];
  for(int i=0;i<n;i++)
        cin>>a[i];

  int pos=-1;
  long long int ans=0;

  for(int i=0;i<n;i++)
  {
      if(a[i]==0)
      {
          pos=i;
      }
      if(pos!=-1)
      {
          ans+=pos+1;
      }
  }

  int count1=0,count2=0;
  int bal1;

  long long int ans1=0;

  for(int i=0;i<n;i++)
  {
      if(a[i]==0)
      {
          count1=0,count2=0,bal1=0;
          continue;
      }

      if(bal1%2==0)
        count1++;
      else
        count2++;
      if(a[i]<0)
        bal1++;
      if(bal1%2==0)
        ans1+=count1;
      else
        ans1+=count2;


  }
  cout<<n*1*ll*(n+1)/2-ans-ans1<<" "<<ans1<<endl;
}
