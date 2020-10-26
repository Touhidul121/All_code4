#include<bits/stdc++.h>
using namespace std;

int n,m;
char grid[1001][1001];
bool dfs(int n,int m,vector<vector<char>>&grid,int i,int j,int count,string word)
{
    if(count==word.size())
        return true;
    if(i<0 || i>=n || j<0 || j>=m || grid[i][j]!=word[count])
        return false;
    char temp=grid[i][j];

    grid[i][j]=' ';

    bool found=dfs(int n,int m,vector<vector<char>>&grid,i+1,j,count+1,word) || dfs(int n,int m,vector<vector<char>>&grid,i-1,j,count+1,word)|| dfs(int n,int m,vector<vector<char>>&grid,i,j+1,count+1,word)||dfs(int n,int m,vector<vector<char>>&grid,i,j-1,count+1,word);
    grid[i][j]=temp;
    return found;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);


    cin>>n>>m;

    map<char,vector<pair<int,int>>>mp;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>grid[i][j];
            mp[grid[i][j]].push_back({i,j});
        }
    }

    int k;
    cin>>k;
    vector<string>words;

    for(int i=0;i<k;i++)
    {
        string str;
        cin>>str;
        words.push_back(str);
    }
    bool f=false;
    for(string s:words)
    {
        vector<pair<int,int>> v=mp[s[0]];

        for(int i=0;i<v.size();i++)
        {

          f=f||dfs(v[i].first,v[i].second,0,s);

        }
        if(f)
            cout<<"YES"<<"\n";
        else
            cout<<"NO"<<"\n";
        f=false;
    }

}
