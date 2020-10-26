#include<bits/stdc++.h>


using namespace std;
vector<int> ar[10001];
int in[10001];
vector<int> res;

bool Kahns(int n)
{
	priority_queue<int,vector<int>,greater<int> > pq;

	for(int i=1;i<=n;i++) if(in[i] == 0) pq.push(i);

	while(!pq.empty())
	{
		int curr = pq.top();
		res.push_back(curr);
		pq.pop();

		for(int child : ar[curr])
		{
			in[child]--;
			if(in[child] == 0)
			pq.push(child);
		}
	}

	return res.size() == n;
}

int main()
{
	int n , x , y , m;
	cin>>n>>m;

    for(int i=1;i<=m;i++) cin>>x>>y , ar[x].push_back(y) , in[y]++;

	if(!Kahns(n))
	cout<<"Sandro fails.";
	else
	{
		for(int node : res)
		cout<<node<<" ";
	}
}

