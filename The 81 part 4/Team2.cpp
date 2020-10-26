#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int zeros,ones;
    cin>>zeros>>ones;

    if(zeros>ones+1 || ones>2*zeros+2)
        cout<<"-1"<<"\n";
    else
    {

      if(zeros==ones+1)
      {
          while(ones--)
          {
              cout<<"01";
          }
          cout<<"0";
          cout<<"\n";
      }
      else if(zeros==ones)
      {
          while(ones--)
          {
              cout<<"10";
          }
          cout<<"\n";
      }
      else
      {
          int diff=ones-(zeros+1);

          for(int i=0;i<zeros;i++)
          {
              if(i<diff)
                cout<<"11";
              else
                cout<<"1";

                cout<<"0";

          }
          if(ones==2*zeros+2)
            cout<<"11";
          else
            cout<<"1";
        cout<<"\n";
      }
    }

}
