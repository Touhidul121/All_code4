#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,count=0;
    cin>>n;
    vector<int> v(n);
    vector<int> v1;
    multiset<int> s;

    for(int i=0;i<n;i++)
        cin>>v[i];
    sort(v.begin(),v.end());

    for(int i=0;i<n;i++)
    {
        s.insert(v[i]);
    }

    for(int i=0;i<n-1;i++)
    {
        if(v[i]==v[i+1])
            v1.push_back(v[i]);
    }


        for(int i=0;i<v1.size();i++)
        {
            while(s.count(v1[i]))
            {
              v1[i]++;
              count++;
            }
            s.insert(v1[i]);
        }
cout<<count<<endl;

}
