#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
    int a,b;
    int n1=0,x,y;
 cin>>a>>b;

 int count=0;
while(a!=0)
{
    x=max(a,b);
    y=min(a,b);
    n1=x/y;
    x=x%y;

    //cout<<x<<endl;
    count+=n1;
   a=x;
   b=y;

}
cout<<count<<endl;
    }
}
