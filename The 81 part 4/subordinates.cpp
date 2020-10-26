#include<bits/stdc++.h>
using namespace std;
const int maxN = 2e5+1;
vector<int>adj[maxN];

int subsize[maxN],vis[maxN];
int dfs(int node)
{
    vis[node]=1;
    int cur_size=1;
    for(int child:adj[node])
    if(!vis[child])
    {
     cur_size+=dfs(child);
    }
    subsize[node]=cur_size;
    return cur_size;


}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n,a;
    cin>>n;
    for(int i=2;i<=n;i++)
        {
            cin>>a;
            adj[a].push_back(i);
            adj[i].push_back(a);
        }

        dfs(1);
    for(int i=1;i<=n;i++){
    if(subsize[i]==0)cout<<0<<"\n";
    else
        cout<<subsize[i]-1<<" ";
    }
        cout<<"\n";
}
