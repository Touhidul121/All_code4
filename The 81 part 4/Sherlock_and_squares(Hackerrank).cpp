#include<bits/stdc++.h>
using namespace std;

int f(int a)
{
    if(a<=0)return 0;

    return (int)sqrt(a);
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);

    int t;
    cin>>t;
    while(t--)

    {
        int a,b;
        cin>>a>>b;
        cout<<f(b)-f(a-1)<<"\n";
    }
}
