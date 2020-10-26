#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    cout<<"Enter number of rows"<<"\n";
    cin>>n;
    cout<<"Enter number of columns"<<"\n";
    cin>>m;
    int a[n][m];
   cout<<"Enter the matrix"<<"\n";
   for(int i=0;i<n;i++)
   {
       for(int j=0;j<m;j++)
       {
           cin>>a[i][j];
       }
   }
   for(int i=0;i<n;i++)
    a[i][0]=1;
   for(int j=0;j<m;j++)
    a[0][j]=1;

   for(int i=1;i<n;i++)
   {
       for(int j=1;j<m;j++)
       {
           a[i][j]=a[i-1][j]+a[i][j-1];
       }
   }
   cout<<"total ways to reach from top to bottom is(you can only go to right or down) = "<<a[n-1][m-1]<<"\n";
}
