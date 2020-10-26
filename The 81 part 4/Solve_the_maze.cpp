#include<bits/stdc++.h>
using namespace std;

int dx[]={0,1,0,-1};
int dy[]={1,0,-1,0};
int n,m;
int vis[50][50];
char grid[50][50];
void dfs(int x,int y)
{
    if(x<0 || x>=n || y<0 || y>=m)return;

    vis[x][y]=1;
    dfs(x,y+1);
    dfs(x+1,y);
    dfs(x,y-1);
    dfs(x-1,y);
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);

    int t;
    cin>>t;
    while(t--)
    {

        memset(vis,0,sizeof(vis));
        cin>>n>>m;


        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                cin>>grid[i][j];
            }
        }

        set<char>st;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
            if(grid[i][j]=='G' || grid[i][j]=='B')st.insert(grid[i][j]);
            }
        }
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
                cout<<grid[i][j]<<" ";
            cout<<"\n";
        }

//        if(st.size()<=1)
//            cout<<"Yes"<<"\n";
//        else
//        {
//            for(int i=0;i<n;i++)
//            {
//                for(int j=0;j<m;j++)
//                {
//                    if(grid[i][j]=='B'){
//                    for(int k=0;k<4;k++)
//                    {
//                        int newX=i+dx[k];
//                        int newY=j+dy[k];
//
//                        if(newX>=0 && newX<n && newY>=0 && newY<m)
//                        {
//                            if(grid[newX][newY]=='G' || grid[newX][newY]=='#')continue;
//                            grid[newX][newY]='#';
//                        }
//                    }
//                    }
//                }
//            }
//
//            dfs(n-1,m-1);
//            bool f=true;
//            for(int i=0;i<n;i++)
//            {
//                for(int j=0;j<m;j++)
//                {
//                    if(grid[i][j]=='G' && vis[i][j]==0)
//                    {
//                        f=false;break;
//                    }
//                }
//                if(!f)break;
//            }
//            if(!f)cout<<"No"<<"\n";
//            else cout<<"Yes"<<"\n";
//        }
    }

}
