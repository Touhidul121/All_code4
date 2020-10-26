#include<bits/stdc++.h>
#define REP(i,n) for (int i = 1; i <= n; i++)
#define mod 1000000007
#define pb push_back
#define ff first
#define ss second
#define ii pair<int,int>
#define vi vector<int>
#define vii vector<ii>
#define lli long long int
#define INF 1000000000
#define endl '\n'
const double PI = 3.141592653589793238460;
typedef std::complex<double> Complex;
typedef std::valarray<Complex> CArray;

using namespace std;
vector<int> ar[200001] , newGraph[200001];
int vis[200001];
set<int> connected;

void dfs(int node)
{
	vis[node] = 1;

	for(int child : ar[node])
	{
		if(vis[child] == 0)
		dfs(child);
	}
}

void bfs(int src)
{
	queue<int> q;
	vis[src] = 1;
	q.push(src);
	vis[1] = 0;

	while(!q.empty())
	{
		int curr = q.front();
		q.pop();

		for(int child : ar[curr])
		if(vis[child] == 0)
		{
			newGraph[curr].push_back(child) , newGraph[child].push_back(curr);
			vis[child] = 1;

			if(child == 1)
			{
				connected.insert(curr);
			}

			if(child != 1)
			q.push(child);
		}
	}
}

void newBfs(int src)
{
	queue<int> q;
	q.push(src);
	vis[src] = 1;

	while(!q.empty())
	{
		int curr = q.front();
		q.pop();

		for(int child : newGraph[curr])
		if(vis[child] == 0)
		{
			vis[child] = 1;
			cout<<curr <<' '<<child<<endl;
			q.push(child);
		}
	}
}

int main()
{
	int n , m , d , a , b;
	cin>>n>>m>>d;

	for(int i=1;i<=m;i++) cin>>a>>b , ar[a].push_back(b) , ar[b].push_back(a);

	int cc = 0;
	vis[1] = 1;

	for(int i=2;i<=n;i++)
	if(vis[i] == 0)
	dfs(i) , cc++;

	if(d < cc || d > ar[1].size())
	{
		cout<<"NO";
		return 0;
	}

	cout<<"YES"<<endl;
	for(int i=1;i<=n;i++)
	vis[i] = 0;

	for(int i=2;i<=n;i++)
	if(vis[i] == 0)
	bfs(i);

	for(int i=1;i<=n;i++)
	vis[i] = 0;

	int rem = d - cc;

	for(int child : ar[1])
	{
		if(rem == 0) break;

		if(connected.find(child) == connected.end())
		{
			newGraph[1].push_back(child) , newGraph[child].push_back(1);
			rem--;
		}

	}

	//find the solution
	newBfs(1);
}
















