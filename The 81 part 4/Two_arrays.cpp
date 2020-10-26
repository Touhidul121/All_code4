#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);

    int t;
    cin>>t;
    while(t--)
    {
        ll n,T,a;
        cin>>n>>T;
        vector<ll>v;
        for(int i=0;i<n;i++)cin>>a, v.push_back(a);
        map<ll,ll>mp1,mp2;

        for(int i=0;i<n;i++)
        {
            if(mp1[T-v[i]]==0)
            {
                mp1[v[i]]++;
                v[i]=0;
            }
            else if(mp2[T-v[i]]==0)
            {
                mp2[v[i]]++;
                v[i]=1;
            }
            else
            {
                if(mp1[T-v[i]]<mp2[T-v[i]]){
                        mp1[v[i]]++;
                    v[i]=0;
                }
                else{
                        mp2[v[i]]++;
                    v[i]=1;
                }
            }
        }
        for(int x:v)
            cout<<x<<" ";
        cout<<"\n";
    }
}
