#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define maxN 72
int n,m,k;
int arr[maxN][maxN];
int sum=0,ans=0;
void solve(int i,int j,int sum)
{
    if(i<0 || i>=n || j<0 || j>=m-1)
        return;

    if(sum%k==0)
    {
        ans=max(ans,sum);
    }

            if(j<m){
            solve(i,j+1,sum+arr[i][j]);
            solve(i,j+1,sum);
            }
            else solve(i+1,j,sum);



}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);

    cin>>n>>m>>k;

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>arr[i][j];
        }
    }
    solve(0,0,0);
    cout<<ans<<"\n";
}
