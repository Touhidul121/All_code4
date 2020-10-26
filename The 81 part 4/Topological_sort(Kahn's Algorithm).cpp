#include<bits/stdc++.h>
using namespace std;

vector<int>adj[101],res;
int in[101],vis[101];

void kahn(int n)
{
    queue<int>q;

    for(int i=1;i<=n;i++){
        if(in[i]==0)
        q.push(i);
}
    while(!q.empty())
    {
        int cur=q.front();
        res.push_back(cur);
        q.pop();

        for(int child:adj[cur])
        {

            in[child]--;
            if(in[child]==0)
                q.push(child);

        }
    }
    for(int i=0;i<res.size();i++)
        cout<<res[i]<<" ";
}
int main()
{
    int n,e,a,b;
    cin>>n>>e;
    for(int i=1;i<=e;i++)
    {
        cin>>a>>b;
        adj[a].push_back(b);
        in[b]++;
    }
    kahn(n);
}
