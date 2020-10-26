#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,a;
    cin>>n>>m;
    int x=0;
    bool f=false;
    vector<int>v,ans;
    for(int i=0;i<n;i++)
    {
        cin>>a;
        v.push_back(a);

    }
    sort(v.begin(),v.end());
    for(int i=0;i<n;i++)
    {
        if(v[i]-x>1){
            for(int j=x+1;j<v[i];j++)
            {

                m-=j;
                if(m>=0)
                {
                    ans.push_back(j);
                }
                else
                {
                    m+=j;
                    f=true;
                    break;
                }
            }
        }
          if(f)
            break;
            x=v[i];
    }

    int r=v.back();
    if(m>=0){
         int   j=r+1;
    while(m-j>=0)
    {
        ans.push_back(j);
        m-=j;
        j++;
    }
    }
    cout<<ans.size()<<"\n";
    for(auto x:ans)
        cout<<x<<" ";
    cout<<"\n";
}
