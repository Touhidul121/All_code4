#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
char grid[1001][1001];
int s1,e1,s2,e2;
int x,y,z,r,res;
int n,m;
bool no_path(int i,int j)
{
    if(i<0 || i>n ||j<0 ||j>m)
        return true;

     return false;
}

int getans(int i,int j)
{
    if(i==s2 && j==e2)return INT_MAX;


     if(!no_path(i,j+1));
     x+=getans(i,j+1);
     if(!no_path(i,j-1))
     y+=getans(i,j-1);
     if(!no_path(i+1,j))
     z+=getans(i+1,j);
     if(!no_path(i-1,j))
        r+=getans(i-1,j);
    return min(x,min(y,min(z,r)));


}
int main()
{

   cin>>n>>m;

   cin>>s1>>e1>>s2>>e2;

   for(int i=0;i<n;i++)
   {
       for(int j=0;j<m;j++)
        cin>>grid[i][j];
   }
   int ans=getans(s1,e2);
   cout<<ans<<"\n";
}
