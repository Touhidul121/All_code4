#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,flag=0,countf=1;
    cin>>n;
    vector<string>v;
    string s,x;
    int m=0;
    for(int i=0; i<n; i++)
    {
        cin>>s;
        v.push_back(s);
    }
    for(int i=0; i<n-1; i++)
    {
        for(int j=0; j<n-i-1; j++)
        {
            if(v[j].size()>v[j+1].size())
                swap(v[j],v[j+1]);
        }
    }

    x=v[n-1];

    for(int i=0; i<n-1; i++)
    {


    string p;
    x=v[i+1];
            for(int j=0; j<=x.size()-v[i].size(); j++)
            {

                p=x.substr(j,v[i].size());
                //cout<<p<<endl;
               if(p==v[i])
               {
                  countf++;
                  break;
             }


            }
flag=0;

    }
//cout<<countf<<endl;
    if(countf!=n)
        cout<<"NO"<<endl;
    else
    {
        cout<<"YES"<<endl;
        for(int i=0; i<v.size(); i++)
            cout<<v[i]<<"\n";
    }

}
