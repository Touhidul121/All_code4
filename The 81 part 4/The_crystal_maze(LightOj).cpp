#include<bits/stdc++.h>
using namespace std;
const int maxN = 505;
int m, n, q;
char grid[maxN][maxN];
//int cnt;
int dx[]={0, 0, 1, -1};
int dy[]={1, -1, 0, 0};
bool vis[maxN][maxN];
map<pair<int, int> , int> mp;
int* ans[maxN][maxN];
int val[maxN][maxN];
int r,c;
void dfs(int x, int y)
{
    vis[x][y]=true;
    ans[x][y]=&val[r][c];
    if(grid[x][y]=='C') val[r][c]++;
    for(int i=0; i<4; i++)
    {
        int xx=x+dx[i];
        int yy=y+dy[i];
        if(xx>=0 && xx<m && yy>=0 && yy<n)
        {
            if(vis[xx][yy]==false && grid[xx][yy]!='#')
            dfs(xx, yy);
        }
    }

}
int main()
{
    int t;
    cin>>t;
    for(int tc=1;tc<=t;tc++)
    {
        cin>>m>>n>>q;
        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++)
            {
                cin>>grid[i][j];

            }

        }

        vector<int>v;
        memset(vis,0,sizeof(vis));
        for(int i=0; i<q; i++)
        {
            cin>>r>>c;
            r--;c--;
            if(vis[r][c]==0)
            {
                val[r][c]=0;
                dfs(r,c);


            }
            v.push_back(*ans[r][c]);
        }
        cout<<"Case "<<tc<<":\n";
          for(int x:v)
            cout<<x<<endl;
        mp.clear();

    }
}
