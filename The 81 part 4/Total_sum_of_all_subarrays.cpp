#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n=3;
    int a[n]={1,2,3};
    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum+=(a[i]*(i+1)*(n-i));
    }
    cout<<sum<<"\n";
}
