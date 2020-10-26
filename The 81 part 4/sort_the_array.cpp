#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,a,x=0,y=0;
    cin>>n;

    vector<int>v,v1;

    for(int i=0;i<n;i++)
    {
        cin>>a;
        v.push_back(a);
        v1.push_back(a);
    }
    bool o=true;
    for(int i=0;i<n-1;i++)
    {
        if(v[i]>v[i+1]&&o)
        {
            x=i;

            while(v[i]>v[i+1])
            {
                i++;
                if(i==n-1)
                    break;
            }
            y=i;
            o=false;
        }
    }
    int i=x,j=y;
    while(i<=j)
    {
        swap(v[i],v[j]);
       i++;
       j--;
    }

    sort(v1.begin(),v1.end());
    if(v==v1){
        cout<<"yes"<<"\n";
        cout<<x+1<<" "<<y+1<<"\n";
    }
    else
        cout<<"no"<<endl;

}
