#include<bits/stdc++.h>
using namespace std;

int power(int a,int n)
{
    int res=1;
    while(n)
    {
        if(n&1)
            res=res*a , n--;
        n=n/2;
        a=a*a;
    }
    return res;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    map<int,string>mp;
    map<char,int>mp1;
    int cnt=1;
    for(char i='A';i<='Z';i++){
        mp1[i]=cnt;
        mp[cnt]=i;
        cnt++;
    }

    int n;
    cin>>n;
    string a;
    int c,d;
    while(n--)
    {
      cin>>a;
      if(isalpha(a[0])&&!isalpha(a[1]))
      {
          int i=1;
          string x="";
          while(!isalpha(a[i]))
          {
              x+=a[i];i++;
          }
          c=stoi(x);
          i++;
          string y="";
          while(!isalpha(a[i]))
          {
              y+=a[i];i++;
          }
          d=stoi(y);
          string s="";
          while(d>0)
          {
            s+=mp[d%26];
            d=d/26;
          }
          reverse(s.begin(),s.end());
          cout<<s<<c<<"\n";
      }
      else{
        string x="";
      int i=0;
      while(isalpha(a[i]))
      {
          x+=a[i];i++;
      }
      c=0;
      int len=x.size();
      for(int i=len-1;i>=0;i--)
      {
        c+=power(26,len-1-i)*mp1[x[i]];
      }
      string y="";
      while(!isalpha(a[i]))
      {
          y+=a[i],i++;
      }

      int d=stoi(y);
      cout<<"R"<<d<<"C"<<c<<"\n";
      }
    }
}
