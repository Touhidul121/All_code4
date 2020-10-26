#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);

    int n;
    cin>>n;
    int arr[n+1];

    for(int i=0;i<n;i++)cin>>arr[i];

    vector<int>v;
    stack<pair<int,int>>stk;

    for(int i=0;i<n;i++)
    {
        if(stk.size()==0)
            v.push_back(-1);
        else if(stk.top().first>arr[i])
            v.push_back(stk.top().second);

        else
        {
            while(stk.size()>0 &&stk.top().first<=arr[i])
            {
                stk.pop();
            }
            if(stk.size()==0)v.push_back(-1);
            else v.push_back(stk.top().second);
        }
        stk.push({arr[i],i});
    }

    vector<int>ans;

    for(int i=0;i<v.size();i++)
        ans.push_back(i-v[i]);

    for(int i=0;i<ans.size();i++)
        cout<<ans[i]<<" ";
    cout<<"\n";
}
