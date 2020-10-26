#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
    string a,b;
    cin>>a>>b;
    string c;
    int flag=0;
    sort(a.begin(),a.end());
    int x=a.size(),y=b.size();
//cout<<a.size()<<" "<<b.size()<<endl;
    for(int i=0;i<=y-x;i++)
    {
      for(int j=i;j<x+i;j++)
      {
       c+=b[j];
      }
      sort(c.begin(),c.end());
      //cout<<c<<" ";
      if(a==c)
      {
          flag++;
          break;
      }
      else
        c.clear();
    }
    if(flag>0)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    }
}
