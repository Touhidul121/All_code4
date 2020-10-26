#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n,n1,n2,a;
    cin>>n;
    deque<int>dk1,dk2;

    cin>>n1;
    for(int i=0;i<n1;i++)
    {
        cin>>a;
        dk1.push_back(a);
    }
    cin>>n2;
    for(int i=0;i<n2;i++)
    {
        cin>>a;
        dk2.push_back(a);
    }

        int cnt=0;
        while(!dk1.empty()&&!dk2.empty())
        {
            cnt++;
            int x=dk1.front();dk1.pop_front();
            int y=dk2.front();dk2.pop_front();
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
            if(cnt>=1000000)
            {
                cout<<-1<<"\n";
                return 0;
            }
        }
        cout<<cnt<<" ";
        if(dk1.empty())
            cout<<2<<"\n";
        else
            cout<<1<<"\n";

}
