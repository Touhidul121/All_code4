#include<bits/stdc++.h>
using namespace std;


int main()
{
    int n;
    cin>>n;
    int i=2,next=1,prev;
int count=0;
    while(n>=next)
    {
    prev=next;
    next=(i*(i+1))/2;
       count++;
       n-=prev;

       i++;
    }
cout<<count<<endl;
}
