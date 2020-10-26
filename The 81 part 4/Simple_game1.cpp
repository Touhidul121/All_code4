#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n,m;
    cin>>n>>m;
    if(n&1)
        {

             if(m>(n/2+1))cout<<m-1<<"\n";
            else cout<<m+1<<"\n";
        }
    else
    {
        if(m>n/2)cout<<m-1<<"\n";
        else cout<<m+1<<"\n";
    }
}
