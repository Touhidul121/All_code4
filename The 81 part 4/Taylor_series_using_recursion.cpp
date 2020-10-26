#include<bits/stdc++.h>
using namespace std;

double taylor(int x,int n)
{
   static double p=1,f=1;
   double r;
    if(n==0)
        return 1;
    else
    {
        r=taylor(x,n-1);
        p=p*x;
        f=f*n;
        return r+p/f;
    }
}
int main()
{
   int x,n;
   cout<<"Enter power of e & max power upto which you want to go"<<endl;
   cin>>x>>n;
   cout<<"The value of e to the power"<<x<<" is = "<<fixed<<setprecision(12)<<taylor(x,n)<<endl;
}
