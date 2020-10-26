#include<bits/stdc++.h>
using namespace std;

void solve(int s,int d,int h,int n)
{
 if(n==1)
 {
     cout<<"Move from "<<s<<" to "<<d<<"\n";return;
 }
 solve(s,h,d,n-1);
 cout<<"Move from "<<s <<" to "<<d<<"\n";

 solve(h,d,s,n-1);
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);

    int n;
    cin>>n;
    int s=1,h=2,d=3;

    solve(s,d,h,n);
}
