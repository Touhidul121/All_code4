#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,count=0,flag=0;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
            cin>>a[i];

        for(int i=n-1;i>=2;i++)
        {
            count=0;
            for(int j=0;j<=i;j++)
            {
                if(a[j]==a[n-j-1])
                    count+=2;
            }
            if((i+1)%2!=0)
                count-=1;
            if(count==i+1){
                    flag++;
                cout<<"YES"<<endl;
            break;
            }

        }
        if(flag==0)
         cout<<"NO"<<endl;
    }
}
