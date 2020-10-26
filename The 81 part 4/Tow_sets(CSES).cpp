#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

unordered_set<int>st;
ll pre[100001];
int main()
{
    ll ar[100001],n,m;
    cin>>n;

    ll sum=(n*(n+1))/2;
    if(sum&1)
        cout<<"NO"<<"\n";
        else{
          sum=sum/2;
        if(n&1)
        {
            st.insert(n);
            sum-=n;
            for(int i=1;i<=n/2;i++)
            {
                if(sum==0)
                    break;
                else
                {
                    sum-=n;
                   st.insert(i);
                   st.insert(n-i);
                }
            }
        }
        else
        {

          for(int i=1;i<=n/2;i++)
            {
                if(sum==0)
                    break;

                    sum-=n+1;
                   st.insert(i);
                   st.insert(n-i+1);

            }
        }
        cout<<"YES"<<"\n";
       cout<<st.size()<<"\n";
       for(ll x:st)
        cout<<x<<" ";
       cout<<"\n";
       cout<<n-st.size()<<"\n";
       for(ll i=1;i<=n;i++)
       {
           if(st.find(i)==st.end())
            cout<<i<<" ";
       }
    }


}

