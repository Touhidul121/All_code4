#include<bits/stdc++.h>
using namespace std;

bool vis[200][200];
int dx[]={-1,0,1,0};
int dy[]={0,1,0,-1};
int n,m;
bool isValid(int i,int j)
{
    if(i<1 || i>n || j<1 || j>m)
        return false;
    if(vis[i][j]==1)
        return false;
    else
        return true;
}
void bfs(int srcX,int srcY)
{
    queue<pair<int,int>>q;
    q.push({srcX,srcY});
    vis[srcX][srcY]=1;
    cout<<srcX<<" "<<srcY<<"\n";

    while(!q.empty())
    {
        int curX=q.front().first;
        int curY=q.front().second;
        q.pop();

        for(int i=0;i<4;i++)
        {
            int newX=curX+dx[i];
            int newY=curY+dy[i];
            if(isValid(newX,newY))
            {
                cout<<newX<<" "<<newY<<"\n";

                vis[newX][newY]=1;
                q.push({newX,newY});
            }
        }
    }
}

int main()
{
    cin>>n>>m;
    int x,y;
    cin>>x>>y;
    bfs(x,y);
}

