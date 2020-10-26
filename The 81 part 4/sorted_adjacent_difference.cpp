#include<bits/stdc++.h>
using namespace std;

void fun()
{
    int n,a;
    cin>>n;
    vector<int>v;
    int v1[n];;

    for(int i=0;i<n;i++)
    {
        cin>>a;
        v.push_back(a);
    }

    sort(v.begin(),v.end());



int mid,j=0,k=1,i=0;

if(!(n&1)){

mid=n/2-1;
i=mid-1;
j=mid+1;
v1[0]=v[mid];

    while(i>=0&&j<n-1)
    {
    v1[k++]=v[j];
    v1[k++]=v[i];

    j++;
    i--;
    }

v1[n-1]=v[n-1];
}
else
{
    mid=n/2;
    i=mid-1;
    j=mid+1;
    v1[0]=v[mid];
    while(i>=0&&j<n)
    {
        v1[k++]=v[j];
        v1[k++]=v[i];
        j++;
        i--;
    }
}
int count=0;
for(int i=0;i<n-1;i++)
    {
        cout<<v1[i]<<" ";
    }
cout<<endl;

}
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        fun();
    }

}
