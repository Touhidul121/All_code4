#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,count1=0,count2=0,count3=0,x;
    cin>>n;

    vector<int> v(n);

    for(int i=0;i<n;i++)
    {
        cin>>v[i];
        if(v[i]==1)
            count1++;
        else if(v[i]==2)
            count2++;
        else
            count3++;
    }
    x=min(count3,min(count1,count2));
    cout<<x<<endl;
    while(x--)
    {
        bool a=false,b=false,c=false;
        for(int i=0;i<n;i++)
        {


            if(v[i]==1&&a==false)
            {
                cout<<i+1<<" ";
                v[i]=0;
                a=true;
            }
            else if(v[i]==2&&b==false)
            {
                cout<<i+1<<" ";
                v[i]=0;
                b=true;
            }
            else if(v[i]==3&&c==false)
            {
                cout<<i+1<<" ";
                v[i]=0;
                c=true;
            }
        }
        cout<<endl;
    }
}
