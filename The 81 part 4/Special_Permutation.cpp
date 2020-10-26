#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);

    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        if(n<=3)cout<<-1<<"\n";
        else
        {
            int x=n;
            if(n&1)x=n;
            else x--;
            for(int i=x;i>=1;i-=2)
                cout<<i<<" ";
            cout<<4<<" "<<2<<" ";
            for(int i=6;i<=n;i+=2)
                cout<<i<<" ";
            cout<<"\n";
        }
    }
}
