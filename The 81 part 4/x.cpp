#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++)
        cin>>v[i];


    vector<int>v1(n,1);
    for(int i=1;i<n;i++)
    {
        for(int j=0;j<i;j++)
        {

          if(v[j]<v[i])
          {
              v1[i]=max(v1[i],v1[j]+1);

          }

        }
    }
    int mx;
    mx=*max_element(v1.begin(),v1.end());
    cout<<mx<<"\n";
}
