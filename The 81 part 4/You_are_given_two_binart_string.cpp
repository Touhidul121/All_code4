#include<bits/stdc++.h>
using namespace std;

unsigned int getFirstSetBitPos(int n)
{
    return log2(n & -n) + 1;
}
int bin_value(string x)
{
    int l=x.size();
    int sum=0,j=0;
    for(int i=l-1;i>=0;i--)
    {
        sum+=(x[i]-'0')*(1<<j);
        j++;
    }
    return sum;
}
int main()
{
    string x,y;
    int fx=0,fy=0;
    cin>>x>>y;

    fx=bin_value(x);
    fy=bin_value(y);
      cout<<fx<<" "<<fy<<"\n";

    int ans=0,ind=0;
    vector<pair<int,int>>v;
    for(int k=0;k<=x.size();k++)
    {
       ans=(fx+(fy<<k));
cout<<ans<<"\n";
       ind=getFirstSetBitPos(ans);
       cout<<ind<<"\n";
       v.push_back(make_pair(ind,k));
    }
    sort(v.begin(),v.end());
    for(int i=0;i<v.size();i++)
        cout<<v[i].first<<" "<<v[i].second<<"\n";

    cout<<v[0].second<<"\n";

}
