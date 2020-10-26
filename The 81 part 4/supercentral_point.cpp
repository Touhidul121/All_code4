#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,a,b,x,y,x1,y1,r1,r2,count1=0,count2=0,count3=0,count4=0,cnt=0;
    cin>>n;
    vector<pair<int,int>> v;

    for(int i=0;i<n;i++)
    {
        cin>>a>>b;
        v.push_back(make_pair(a,b));
    }
    for(int i=0;i<n;i++)
    {
        count1=0,count2=0,count3=0,count4=0;
        x=v[i].first;
        y=v[i].second;
        for(int j=0;j<n;j++)
        {

            x1=v[j].first;
            y1=v[j].second;
                if(x1>x&&y1==y)
                    count1++;
                if(x1<x&&y1==y)
                    count2++;
                if(x1==x&&y1<y)
                    count3++;
                if(x1==x&&y1>y)
                    count4++;

        }
        r1=count1>0&&count2>0;
        r2=count3>0&&count4>0;
        if(r1&&r2)
            cnt++;
    }
    cout<<cnt<<endl;
}
