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
#define endl '\n'
using namespace std;
vi tree[100001];
lli A[100001] ;
lli X;

lli dfs(int node , int parent)
{
	lli res = 0;
	for(int child:tree[node])
	if(child!= parent)
	{
		res += dfs(child , node);
	}

	return max(res + A[node] , -X);
}

void clearTree(int n)
{
	REP(i , n)
	tree[i].clear();
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
	int n , x , y , t;
	cin>>t;

	while(t--)
	{
		cin>>n>>X;
		REP(i , n) cin>>A[i];
		clearTree(n);

		REP(i , n-1)
		cin>>x>>y , tree[x].pb(y) , tree[y].pb(x);

		cout<<dfs(1 , 1)<<endl;
	}
}

