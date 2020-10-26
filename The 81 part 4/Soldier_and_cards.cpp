#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,k1,k2,a,x,y;
    cin>>n;
    deque<int>dk1,dk2;
    int res=0,cnt=0;
    cin>>k1;
    for(int i=0;i<k1;i++)
    {
        cin>>a;
        dk1.push_back(a);

    }
    cin>>k2;
    for(int i=0;i<k2;i++)
    {
        cin>>a;
        dk2.push_back(a);

    }


    while(true)
    {
        x=dk1.front();
        y=dk2.front();
        dk1.pop_front();
        dk2.pop_front();

         if(x>y)
        {
          dk1.push_back(y);
          dk1.push_back(x);
        }
        else
        {
            dk2.push_back(x);
            dk2.push_back(y);
        }
        cnt++;
        if(dk1.size()==0)
        {
            res=2;
            break;
        }
        if(dk2.size()==0)
        {
            res=1;
            break;
        }
        if(cnt==10000)
        {
            cout<<-1<<"\n";
            return 0;
        }

    }
    cout<<cnt<<" "<<res<<"\n";

}
