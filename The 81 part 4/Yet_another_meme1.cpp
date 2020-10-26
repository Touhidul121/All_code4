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

        for(int i=3;i<=n;i++)
        {

            for(int k=0;k<n-2;k++){
                    count=0;
            for(int j=k;j<i;j++)
            {
             if(a[j]==a[(k+i)-j-1]){
                    cout<<"sotto ,";
                    count++;
             }
            }
             cout<<count<<" "<<i<<" "<<k<<endl;
            if(count==i){
                flag++;
                break;
            }
            }
            if(flag>0)
            {
                cout<<"YES"<<endl;
                break;
            }
            }
        }
    }

