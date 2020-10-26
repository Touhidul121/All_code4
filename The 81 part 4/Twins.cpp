#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,a,sum1=0,sum2=0,j=0,count1=0;
    cin>>n;

    vector<int>v;

    for(int i=0;i<n;i++)
    {
        cin>>a;
        v.push_back(a);
    }
    sort(v.rbegin(),v.rend());

    for(int i=0;i<n;i++)
    {
        sum1=0;
        sum2=0;
        count1=0;
        for(j=0;j<=i;j++)
        {
            sum1+=v[j];
            count1++;
        }
        for(int k=i+1;k<n;k++)
        {
            sum2+=v[k];
            //count1++;
        }
        //cout<<sum1<<" "<<sum2<<endl;
        if(sum1==sum2)
        {
            cout<<count1+1<<endl;
            return 0;
        }
        else if(sum1>sum2)
        {
            cout<<count1<<endl;
            return 0;
        }
    }
}
