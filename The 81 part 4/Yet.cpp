#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,flag=0;
        cin>>n;
        vector<int> a(n);
        for(int i=0;i<n;i++)
            cin>>a[i];

       for(int i=0;i<n-1;i++)
       {
           for(int j=i+1;j<n;j++)
           {
            if(a[i]==a[j]&&j-i+1>=3)
                flag++;
           }
       }
        if(flag>0)
                cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }

}
