#include<bits/stdc++.h>
using namespace std;

int main()
{
    int x,n,a;
    cin>>x>>n;

    set<int>st;
    st.insert(0);
    st.insert(x);
    map<int,int>mp;
    mp[x]=1;

    for(int i=0;i<n;i++)
    {
        cin>>a;
      auto it=st.lower_bound(a);
        int x=*it;
        it--;
        int y=*it;
        mp[x-y]--;
        if(mp[x-y]==0)
            mp.erase(x-y);
        mp[x-a]++;
        mp[a-y]++;
        st.insert(a);
        cout<<mp.rbegin()->first<<" ";
    }

}
