#include<bits/stdc++.h>
using namespace std;

int main()
{
    int k,sum;
    cin>>k;
    int f1=1,f2=1,fc=0;
    if(k<=2)
    cout<<k<<endl;
    else
        {
            sum=2;
            for(int i=3;i<=k;i++)
            {
                fc=f1+f2;
                sum+=fc;
                f1=f2;
                f2=fc;
            }
            cout<<sum<<endl;
        }
}
