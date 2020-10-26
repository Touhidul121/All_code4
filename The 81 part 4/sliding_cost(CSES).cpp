#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>

using namespace std;
using namespace __gnu_pbds;

// Policy based data structure
typedef tree<int, null_type,
             less_equal<int>, rb_tree_tag,
             tree_order_statistics_node_update>
    Ordered_set;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n,k;
    cin>>n>>k;

    int ar[n];
    for(int i=0;i<n;i++)
        cin>>ar[i];

    Ordered_set s;
    for(int i=0;i<k;i++)
        s.insert(ar[i]);

    if(k&1)
    {
        int ans=*s.find_by_order(k/2);
        int cost=0;
        for(int i=0;i<k;i++)
            cost+=abs(ans-ar[i]);
        cout<<cost<<" ";


        for(int i=0;i<n-k;i++)
        {
            cost=0;
            s.erase(s.find_by_order(s.order_of_key(ar[i])));

            s.insert(ar[i+k]);

            ans=*s.find_by_order(k/2);
            for(auto x:s)
                cost+=abs(ans-x);
            cout<<cost<<" ";
        }
        cout<<"\n";
    }

    else
    {
        int x=*s.find_by_order(k/2);
        int y=*s.find_by_order(k/2-1);
        int cost=0,ans=min(x,y);

        for(int i=0;i<k;i++)
            cost+=abs(ans-ar[i]);
        cout<<cost<<" ";
        int prev=cost;
        for(int i=0;i<n-k;i++)
        {
            cost=0;
            s.erase(s.find_by_order(s.order_of_key(ar[i])));

            s.insert(ar[i+k]);

            int x=*s.find_by_order(k/2);
            int y=*s.find_by_order(k/2-1);
            int r=ans-prev;
            ans=min(x,y);
            for(auto x:s)
                cost=abs(x-ans);
            cout<<cost<<" ";
        }
        cout<<"\n";

    }
}

