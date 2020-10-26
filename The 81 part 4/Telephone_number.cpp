#include<bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  cin>>t;

  while(t--)
  {
      int n;
      cin>>n;
      string s;
      cin>>s;

      int x=105;
      for(int i=0;i<s.size();i++)
      {
          if(s[i]=='8')
          {
              x=i;
              break;
          }
      }

      if(n-x>=8)
        cout<<"YES"<<endl;
      else
        cout<<"NO"<<endl;

  }
}
