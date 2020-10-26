#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,h,count=0,a;
    cin>>n>>h;

    for(int i=0;i<n;i++)
    {
        cin>>a;
        if(a>h)
            count+=2;
        else
            count++;
    }
    cout<<count<<endl;
}
