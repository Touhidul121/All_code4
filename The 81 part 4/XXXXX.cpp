#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x,a;
        cin>>n>>x;
        vector<int>v;
        int cnt=0,sum=0,ans1,ans2,sum1;
        bool f=true;
        for(int i=0;i<n;i++)
        {
            cin>>a;
            v.push_back(a);
            sum+=a;
            if(a%x==0)
                cnt++;
        }
        sum1=sum;
        if(sum%x!=0)
            cout<<n<<"\n";
            else if(cnt==n)
                cout<<-1<<"\n";
            else
            {
                for(int i=0;i<n;i++)
                {
                    sum-=v[i];
                    if(sum%x!=0)
                    {
                        ans1=n-(i+1);
                        break;
                    }
                }
                for(int i=n-1;i>=0;i--)
                {


                    sum1-=v[i];

                    if(sum1%x!=0)
                    {
                        ans2=i;
                        break;
                    }
                }

                cout<<max(ans1,ans2)<<"\n";
            }
    }
}
