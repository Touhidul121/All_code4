#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,count1=0,count2=0,count3=0,x,y,flag=0;
    cin>>n;
    vector<int> v(n);

    for(int i=0;i<n;i++){
        cin>>v[i];
        if(v[i]==1)
            count1++;
        else if(v[i]==2)
            count2++;
        else
            count3++;
    }

    if(count1==0||count2==0||count3==0)
    {
       cout<<0<<endl;
    }
    else
    {
        x=min(count1,count2);
        y=min(x,count3);
        cout<<y<<endl;

        for(int i=0;i<n;i++)
        {
            if(v[i]==0)
                continue;

            for(int j=i+1;j<n;j++)
            {
                if(v[j]==0)
                continue;
                for(int k=j+1;k<n;k++)
                {
                  if(v[k]==0)
                  continue;
                if(v[i]!=v[j]&&v[j]!=v[k]&&v[i]!=v[k])
                {
                    if(v[i]==1)
                        cout<<i+1<<" ";
                    else if(v[j]==1)
                        cout<<j+1<<" ";
                    else if(v[k]==1)
                        cout<<k+1<<" ";
                    if(v[i]==2)
                        cout<<i+1<<" ";
                    else if(v[j]==2)
                        cout<<j+1<<" ";
                    else if(v[k]==2)
                        cout<<k+1<<" ";
                    if(v[i]==3)
                        cout<<i+1<<" ";
                    else if(v[j]==3)
                        cout<<j+1<<" ";
                    else if(v[k]==3)
                    cout<<k+1<<" ";
                    v[i]=0;
                    v[j]=0;
                    v[k]=0;
                   flag++;
                 break;
                }

            }
            if(flag>0)
            {

        cout<<endl;
                break;
            }
        }
    }

}
cout<<endl;
}
