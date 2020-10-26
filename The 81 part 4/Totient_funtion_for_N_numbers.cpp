#include<bits/stdc++.h>
using namespace std;

int phi[10004];
void totient(int n)
{

    for(int i=1;i<=n;i++)
        phi[i]=i;

    for(int i=2;i<=n;i++)
    {
        if(phi[i]==i){
        for(int j=i;j<=n;j+=i)
        {
            phi[j]/=i;
            phi[j]*=(i-1);
        }
        }
    }

}
int main()
{

    totient(10000);
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        long long h=0,ans=0;
        cin>>n;
        for(int i=1;i<=n;i++)
        {

                h+=(long long)phi[i];

        }

        for(int i=1;i<=n;i++)
            ans+=(long long)phi[i]*h;
        cout<<ans<<'\n';
    }
}
