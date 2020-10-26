#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,a;
    cin>>n;
    set<int>st;
    int cnt=1,mx=1;
    vector<int>v;
    for(int i=0;i<n;i++)
    {
        cin>>a;
        v.push_back(a);
        st.insert(a);
    }
    sort(v.begin(),v.end());
    for(int i=0;i<n-1;i++)
    {
        if(v[i]==v[i+1])
            cnt++;

            if(mx<cnt)
            {
                mx=cnt;
            }
            if(v[i]!=v[i+1])
            cnt=1;

    }
    cout<<mx<<" "<<st.size()<<"\n";
}
