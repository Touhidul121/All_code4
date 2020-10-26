#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define pb push_back
#define mp make_pair
#define all(x) x.begin(),x.end()

priority_queue<pair<ll,pair<ll,ll>>> pq;
vector<pair<ll,ll>> adj[100007];
ll leaves[100007],sum;
bool vis[100007];

void dfs(ll node){
	vis[node]=1;

	if(adj[node].size()==1 &&node!=1){
		leaves[node]=1;
		return;
	}

	for(pair<ll,ll> p:adj[node]){
		ll child=p.first,w=p.second;

		if(!vis[child]){
			dfs(child);
			leaves[node]+=leaves[child];
			sum+=(w*leaves[child]);
			pq.push(mp(w*leaves[child]-(w/2)*leaves[child],mp(w,leaves[child])));
		}
	}
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

	ll t;
	cin>>t;

	read:
	while(t--){
		ll n,s,ans=0;
		cin>>n>>s;

		sum=0;
		while(!pq.empty()) pq.pop();
		for(ll i=1;i<=n;i++){
			adj[i].clear();
			vis[i]=0;
			leaves[i]=0;
		}

		for(ll i=1;i<n;i++){
			ll u,v,w;
			cin>>u>>v>>w;

			adj[u].pb(mp(v,w));
			adj[v].pb(mp(u,w));
		}

		dfs(1);

		while(sum>s){
			ans++;
			pair<ll,pair<ll,ll>> details=pq.top();
			pq.pop();
			ll dif=details.first,cost=details.second.first,lvs=details.second.second;
			sum-=dif;
			cost/=2;
			dif=(cost*lvs)-((cost/2)*lvs);
			pq.push(mp(dif,mp(cost,lvs)));
		}

		cout<<ans<<endl;
	}

	return 0;
}
