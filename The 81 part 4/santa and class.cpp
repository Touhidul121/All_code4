#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,k,sum=0;
    cin>>n>>m>>k;

    for(int i=1;i<n+1;i++)
    {
        sum=sum+2*m;

        if(k<=sum){
            cout<<i<<" ";
        sum=sum-2*m;
        break;
        }
    }
    int diff=k-sum;

    int desk=(int) ceil(diff/2.0);

    cout<<desk<<" ";

    if(k%2==0)
        cout<<'R'<<endl;
    else
        cout<<'L'<<endl;

}
