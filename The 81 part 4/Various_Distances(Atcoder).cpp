#include<bits/stdc++.h>
using namespace std;

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);cout.tie(NULL);

  int  n;
  cin>>n;
  //double arr[n];

  double mx=0,ans1=0;
  double ans2=0,a;

  for(int i=0;i<n;i++)
  {
      cin>>a;
      mx=max(mx,abs(a));
      ans1+=abs(a);
      ans2+=abs(a)*abs(a);
  }
  cout<<fixed<<setprecision(0)<<ans1<<"\n";
  cout<<fixed<<setprecision(16)<<sqrt(ans2)<<"\n";
  cout<<fixed<<setprecision(0)<<mx<<"\n";
}
