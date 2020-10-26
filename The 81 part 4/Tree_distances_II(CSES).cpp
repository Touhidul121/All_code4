#include <bits/stdc++.h>
using namespace std;
const int maxN = 2e5+1;
vector<int>adj[maxN];
vector<int>ans(maxN,0);
vector<int>cnt(maxN,1);

int n;
   void dfs1(int node, int parent) {

      for(int child:adj[node]) {

         if (child != parent) {
            dfs1(child, node);
            cnt[node] += cnt[child]; //counting subtree size

            ans[node] += cnt[child] + ans[child]; //counting cost just root er khetre root theke sokol node a jaoar distance true
         }
      }
   }
   void dfs2(int node, int parent) {
      for (int child:adj[node]) {

         if (child != parent) {
            ans[child] = ans[node] - cnt[child] + n - cnt[child];
            dfs2(child, node);
         }
      }
   }

int main()
{

      int a,b;
      cin>>n;
      for (int i = 1;i<=n-1;i++) {
         cin>>a>>b;
        adj[a].push_back(b);
         adj[b].push_back(a);
      }
      dfs1(1, -1);

      dfs2(1, -1);
      for(int i=1;i<=n;i++)
        cout<<ans[i]<<" ";
      cout<<"\n";
}


