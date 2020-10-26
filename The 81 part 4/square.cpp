#include<bits/stdc++.h>
using namespace std;

void fun()
{
    int a1,b1,a2,b2;
    cin>>a1>>b1>>a2>>b2;

    int mx1,mx2,mn1,mn2;
    mx1=max(a1,b1);
    mx2=max(a2,b2);
    mn1=min(a1,b1);
    mn2=min(a2,b2);

    if(mx1==mx2&&mn1+mn2==mx1)
        cout<<"Yes"<<"\n";
    else
        cout<<"No"<<"\n";
}
int main()
{
    int t;
    cin>>t;
    while(t--){
    fun();
    }
}
