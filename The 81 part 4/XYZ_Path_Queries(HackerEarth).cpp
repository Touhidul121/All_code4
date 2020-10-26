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
lli val[100001] , bit[100001][32];
vi ar[100001];
const int maxN = 20;
int LCA[100001][maxN] , level[100001];

lli sum[100001];
lli cnt[100001][32];

lli fact[100001] , invFact[100001];

void dfs(int node , int p , lli s , int lvl)
{
	sum[node] = s;
	LCA[node][0] = p;
	level[node] = lvl;

	if(p != -1)
	{
		for(int i=0;i<32;i++)
		{
			cnt[node][i] += cnt[p][i];
		}
	}

	for(int child : ar[node])
	if(child != p)
	dfs(child , node , s + val[child] , lvl + 1);

}

lli power(lli a , lli n)
{
	lli res = 1;
	a %= mod;

	while(n)
	{
		if(n & 1) res = (res * a) % mod;

		n >>= 1;
		a = (a * a) % mod;
	}

	return res;
}

void init(int n)
{
	fact[0] = invFact[0] = 1;

	for(lli i=1;i<=100000;i++)
	{
		fact[i] = (fact[i-1] * i) % mod;
		invFact[i] = (invFact[i-1] * power(i , mod - 2)) % mod;
	}

	for(int j=1;j<=maxN;j++)
	{
		for(int i=1;i<=n;i++)
		if(LCA[i][j-1] != -1)
		{
			LCA[i][j] = LCA[LCA[i][j-1]][j-1];
		}
	}
}

int getLCA(int a , int b)
{
	if(level[a] > level[b]) swap(a , b);

	int d = level[b] - level[a];
	int i = 0;

	while(d)
	{
		if(d & 1) b = LCA[b][i];

		d >>= 1 , i++;
	}

	if(a == b) return a;

	for(int i=maxN-1;i>=0;i--)
	if(LCA[a][i] != -1 && LCA[b][i] != -1 && (LCA[a][i] != LCA[b][i]))
	a = LCA[a][i] , b = LCA[b][i];

	return LCA[a][0];
}

lli C(lli N , lli K)
{
	if(K > N) return 0;

	lli res = (fact[N] * invFact[K]) % mod;

	return (res * invFact[N-K]) % mod;
}

int main()
{
	int n , a , b , q , code;
	cin>>n;
	REP(i , n){
		cin>>val[i];
		for(int j=0;j<32;j++)
		{
			if(val[i] & (1 << j)) bit[i][j] = cnt[i][j] = 1;
			else				  bit[i][j] = cnt[i][j] = 0;
 		}
	}

	REP(i , n-1) cin>>a>>b , ar[a].pb(b) , ar[b].pb(a);

	memset(LCA , -1 , sizeof LCA);

	dfs(1 , -1 , val[1] , 0);

	init(n);
	cin>>q;

	while(q--)
	{
		cin>>code>>a>>b;
		lli res = 0;
		int lca = getLCA(a , b);
		int tot = level[a] + level[b] - 2 * level[lca] + 1;

		if(code == 1)
		{
			res = sum[a] + sum[b] - 2 * sum[lca] + val[lca];
			cout<<res % mod<<endl;
		}
		else
		if(code == 2)
		{
			for(int i=0;i<32;i++)
			{
				int bit_1 = cnt[a][i] + cnt[b][i]  - 2 * cnt[lca][i] + bit[lca][i];
				int bit_0 = tot - bit_1;

				lli weight = 1 << i;
				lli pairs = (C(tot , 2) - C(bit_0 , 2) + mod) % mod;
				res = (res + ((weight * pairs) % mod)) % mod;

			}
			cout<<res<<endl;
		}
		else
		if(code == 3)
		{
			for(int i=0;i<32;i++)
			{
				int bit_1 = cnt[a][i] + cnt[b][i]  - 2 * cnt[lca][i] + bit[lca][i];
				int bit_0 = tot - bit_1;

				lli weight = 1 << i;
				lli triples = (C(tot , 3) - C(bit_0 , 3) + mod) % mod;
				res = (res + ((weight * triples) % mod)) % mod;

			}
			cout<<res<<endl;
		}
		else
		{
			for(int i=0;i<32;i++)
			{
				int bit_1 = cnt[a][i] + cnt[b][i]  - 2 * cnt[lca][i] + bit[lca][i];
				int bit_0 = tot - bit_1;

				lli weight = 1 << i;
				lli quads = (C(tot , 4) - C(bit_0 , 4) + mod) % mod;
				res = (res + ((weight * quads) % mod)) % mod;

			}
			cout<<res<<endl;
		}
	}

}
