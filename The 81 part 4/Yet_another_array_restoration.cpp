#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin>>t;
    while(t--)
    {
        int n,x,y,r=1,diff;
        cin>>n>>x>>y;

        deque<int>dk;
        for(int i=n-1;i>=1;i--)
        {
            if((y-x)%i==0)
            {
                diff=(y-x)/i;
                r=i;
                break;
            }
        }

        int rem=n-(2+r-1);

        dk.push_back(x);
        int x1=x;
        for(int i=1;i<=r-1;i++)
        {
            x1+=diff;
          dk.push_back(x1);

        }
        dk.push_back(y);

        for(int i=1;i<=rem;i++)
        {
            x-=diff;
            dk.push_front(x);

        }
        while(!dk.empty()&&dk.front()<=0)
        {
            dk.pop_front();
            y+=diff;
            dk.push_back(y);

        }
        while(!dk.empty()){
            cout<<dk.front()<<" ";
            dk.pop_front();
        }
        cout<<"\n";
        }
    }
