#include<bits/stdc++.h>
using namespace std;

int main()
{
    int y,k,n,x;
    cin>>y>>k>>n;

    if(n-y<k-(y%k)) //min value to be added to make x+y divisible (x is at least 1 that's why n-y==(k-y%k) doesn't hold
        cout<<-1<<endl;
    else
       {
           x=k-(y%k);// min value that is needed to make x+y divisible by k

           while(x+y<=n)
           {
               cout<<x<<" ";
               x+=k;
           }
           cout<<endl;
       }
}
