#include<bits/stdc++.h>
using namespace std;

#define MAX 100000
int dis[MAX+5],ans[MAX+5];
vector<int>adj[MAX+5];
int max_node,max_dist;
int vis[MAX+5];
int cnt=0,k;

void dfs(int x,int par,int cnt1)
{
    vis[x]=1;
    dis[x]=dis[par]+1;
    cnt++;
    if(max_dist<=dis[x])
    {
        max_dist=dis[x];
        max_node=x;
    }

    for(int child:adj[x])
    {
        if(!vis[child])
            dfs(child,x,cnt1);
    }
    if(cnt1==0)
        vis[x]=0;
}

int main()
{
    int n,x,y,t,m,q,casec=0;
    scanf("%d",&t);

    while(t--)
    {
        memset(ans,-1,sizeof(ans));
        memset(dis,0,sizeof(dis));
        memset(vis,0,sizeof(vis));

        for(int i=0;i<MAX+5;i++)
            adj[i].clear();

        casec++;

        scanf("%d%d",&n,&m);

        for(int i=1;i<=m;i++)
        {
            scanf("%d%d",&x,&y);
            adj[x].push_back(y);
            adj[y].push_back(x);

        }


        for(int i=1;i<=n;i++)
        {


            if(!dis[i])
            {
                max_node=0,max_dist=0;
                int cnt1=0;
                cnt=0;
                dfs(i,0,cnt1);
                cnt1++;
                int save=cnt;
                dfs(max_node,0,cnt1);
                k=max_dist;

                for(int j=1;j<=k;j++)
                    ans[j]=j-1;

                for(int j=k+1;j<=save;j++)
                {
                    if(ans[j]==-1)
                    ans[j]=2*(j-k)+ans[k];

                    else ans[j]=min(ans[j],2*(j-k)+ans[k]);
                }
            }

        }

        printf("Case %d:\n",casec);
        scanf("%d",&q);

        while(q--)
        {
            scanf("%d",&k);
            if(ans[k]==-1)
                printf("impossible\n");
            else
                printf("%d\n",ans[k]);
        }
    }
}

