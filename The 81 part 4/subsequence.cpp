#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,k;
    cin>>n>>k;
    set<string>s;
    vector<string>v;
    string p;
    cin>>p;
    cout<<p.size()<<endl;
int x;
    for(int i=0;i<pow(2,p.size());i++)
    {
        string q;
        for(int j=0;j<p.size();j++)
        {
            x=(i&(1<<j));
            if(x!=0)
                q+=p[j];
        }
        s.insert(q);
        q.clear();
    }
    // bubble sort
    for(auto r:s)
    {
        v.push_back(r);
    }
    for(int i=0;i<v.size()-1;i++)
    {
        for(int j=0;j<v.size()-1-i;j++)
        {
            if(v[j].size()>v[j+1].size())
            {
                swap(v[j],v[j+1]);
            }
        }
    }
    for(auto r:v)
        cout<<r<<" ";
}
