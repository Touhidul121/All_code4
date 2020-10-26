#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,a;
    cin>>n;
    vector<int>v(n+5);
vector<int>v1(10000005);
int m=0;
    for(int i=0;i<n;i++)
    {
        cin>>a;
        for(int j=0;j<a;j++)
        {
            v1[m++]=i+1;
        }
    }
    int k;
cin>>k;
    for(int i=0;i<k;i++)
    {
        cin>>a;
        a--;
        cout<<v1[a]<<endl;
    }



}
