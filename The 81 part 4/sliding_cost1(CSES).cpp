#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>

using namespace std;
using namespace __gnu_pbds;

// Policy based data structure
typedef tree<long long, null_type,
             less_equal<long long>, rb_tree_tag,
             tree_order_statistics_node_update>
    Ordered_set;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    long long n,k;
    cin>>n>>k;

    long long arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];

    Ordered_set s;

    for(int i=0;i<k;i++)
        s.insert(arr[i]);


    auto it=s.find_by_order((k+1)/2 -1);
    long long old_mid=*it;
    long long cost=0;
    for(int i=0;i<k;i++){
        cost+=abs(old_mid-arr[i]);
    }
    cout<<cost<<" ";

    for(int i=0;i<n-k;i++)
    {
        s.erase(s.find_by_order(s.order_of_key(arr[i])));
        s.insert(arr[i+k]);
        auto it=s.find_by_order((k+1)/2-1);
        long long new_mid=*it;

        cost=cost-abs(old_mid-arr[i])+abs(new_mid-arr[i+k]);
        if(k%2==0)cost-=new_mid-old_mid;
        cout<<cost<<" ";
        old_mid=new_mid;

    }
    cout<<"\n";
}
