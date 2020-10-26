#include<bits/stdc++.h>
using namespace std;



int main()
{
    int a;
    vector<int>v;
    for(int i=0;i<4;i++)
    {
        cin>>a;
        v.push_back(a);
    }
    sort(v.begin(),v.end());
    if((v[0]+v[1]>v[2])||(v[0]+v[1]>v[3])||(v[0]+v[2]>v[3])||(v[1]+v[2]>v[3]))
        cout<<"TRIANGLE"<<"\n";
    else if((v[0]+v[1]==v[2])||(v[0]+v[1]==v[3])||(v[0]+v[2]==v[3])||(v[1]+v[2]==v[3]))
      cout<<"SEGMENT"<<"\n";
else cout<<"IMPOSSIBLE"<<"\n";
}
