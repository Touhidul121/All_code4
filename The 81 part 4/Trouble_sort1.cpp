#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin>>t;
    while(t--){
    int n,a,cnt1=0,cnt2=0;
    cin>>n;
    vector<int>v1,v2,v3;
    for(int i=0;i<n;i++)
        cin>>a, v1.push_back(a),v2.push_back(a),v3.push_back(a);
    sort(v2.begin(),v2.end());
    sort(v3.rbegin(),v3.rend());
    for(int i=0;i<n;i++){
        cin>>a;
        if(a==0)
            cnt1++;
        else
            cnt2++;
    }
    if(cnt1==0 || cnt2==0)
    {
        if(v1==v2 || v1==v3)
            cout<<"Yes"<<"\n";
        else
            cout<<"No"<<"\n";
    }
    else
    {
       cout<<"Yes"<<"\n";
    }
    }
}
