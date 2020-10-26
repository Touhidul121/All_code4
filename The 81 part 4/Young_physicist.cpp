#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,sum=0,flag=0;
    cin>>n;
    int a[n][3];

    for(int i=0;i<n;i++)
        for(int j=0;j<3;j++)
        cin>>a[i][j];

    for(int j=0;j<3;j++)
    {
        sum=0;
        for(int i=0;i<n;i++)
        {
            sum+=a[i][j];
        }
        if(sum!=0){
                flag++;
        break;
        }

    }
    if(flag>0)
        cout<<"NO"<<endl;
    else
        cout<<"YES"<<endl;
}
