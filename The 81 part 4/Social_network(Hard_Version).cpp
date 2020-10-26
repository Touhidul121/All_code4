#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll n,a,k,x;
    cin>>n>>k;
    deque<ll>dk;
    set<ll>st;

    for(int i=0;i<n;i++)
    {
        cin>>a;
        if(st.find(a)!=st.end())
            continue;
        else
        {
            if(dk.size()>=k){
            x=dk.back();
            dk.pop_back();

            if(st.size())
            st.erase(x);
            }


            dk.push_front(a);
            st.insert(a);
        }
    }
    cout<<dk.size()<<"\n";
    while(!dk.empty())
    {
        cout<<dk.front()<<" ";
        dk.pop_front();
    }
}
