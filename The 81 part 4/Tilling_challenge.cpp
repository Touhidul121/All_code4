#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,count1=0,count2=0,r;
    cin>>n;

    char v[n][n];
    char a,x=' ',y=' ',p=' ',q=' ';

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>v[i][j];
            if(v[i][j]=='#')
                count1++;

        }
    }
    for(int i=1;i<n-1;i++)
    {
        for(int j=1;j<n-1;j++)
        {
            x=v[i][j+1];
            y=v[i][j-1];
            p=v[i-1][j];
            q=v[i+1][j];
            r=(x=='.'&&y=='.'&&p=='.'&&q=='.');

            if(v[i][j]=='.'&&r)
            {
               v[i][j+1]='+';
            v[i][j-1]='+';
            v[i-1][j]='+';
            v[i+1][j]='+';
            count2++;
            }
        }
    }
    //cout<<count2<<" "<<count1<<endl;
    if(count1+count2*5==n*n)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
}
