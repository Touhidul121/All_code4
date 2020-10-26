#include<bits/stdc++.h>

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
    cin.tie(NULL);cout.tie(NULL);

    int n,k;
    cin>>n>>k;
    int arr[n];

    Ordered_set s;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        if(i<k)
            s.insert(arr[i]);
    }
    if(k&1)
    {
        auto it=s.find_by_order(k/2);
        cout<<*it<<" ";
        for(int i=0;i<n-k;i++)
        {
            s.erase(s.find_by_order(s.order_of_key(arr[i])));
            s.insert(arr[i+k]);
            auto it=s.find_by_order(k/2);
            cout<<*it<<" ";
        }
    }
    else
    {
        auto it=s.find_by_order(k/2);
        auto it1=s.find_by_order(k/2-1);
        cout<<min(*it,*it1)<<" ";
        for(int i=0;i<n-k;i++)
        {
           s.erase(s.find_by_order(s.order_of_key(arr[i])));
           s.insert(arr[i+k]);
           auto it=s.find_by_order(k/2);
           auto it1=s.find_by_order(k/2-1);
           cout<<min(*it,*it1)<<" ";
        }
    }
}
