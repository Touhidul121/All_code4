#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);

    int n,k,a;
    cin>>n>>k;
    vector<int>v;
    priority_queue<int,vector<int>,greater<int>>pq;
    for(int i=0;i<n;i++)
    {
     cin>>a;
     if(i<k)pq.push(a);
     v.push_back(a);
    }

    vector<int>ans;
    for(int i=k;i<n;i++)
    {
        pq.push(v[i]);
        ans.push_back(pq.top());
        pq.pop();
    }

    while(!pq.empty())
        ans.push_back(pq.top()),pq.pop();

    for(int x:ans)
        cout<<x<<" ";
}
