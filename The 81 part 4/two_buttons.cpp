#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

      int n,m;

      cin>>n>>m;

      if(n<m)
      {
          int sum=n,r=0,ans1=0;

          while(sum<m)
          {
              sum*=2;
              r++;

          }
          ans1+=r;
          ans1+=(sum%m);


if(m%2==0&&n>m/2){
          int b=0,ans2=0;
          sum=n;

          while(m/sum!=2)
          {
              sum--;
              b++;
          }
          ans2+=b;
          ans2++;
          cout<<min(ans1,ans2)<<"\n";

}
else
    cout<<ans1<<"\n";

      }
      else
        cout<<n-m<<"\n";
}
