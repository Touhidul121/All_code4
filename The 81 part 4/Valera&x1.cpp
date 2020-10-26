#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    char s[n+5][n+5];
    int count1=0,count2=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
            cin>>s[i][j];

    }

char x=s[0][0],c=s[0][1];

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if((i==j&&s[i][j]==x)||(j==n-1-i&&s[i][j]==x))
            {
                count1++;
            }
             if(i!=j&&j!=n-1-i&&s[i][j]!=x&&s[i][j]==c)
            {

                count2++;
            }
        }
    }
int p=0,q=0;
//cout<<count1<<endl;
//cout<<count2<<endl;
p=((n-1)*2)+1;
q=n*n-p;
if(count1==p&&count2==q)
        cout<<"YES"<<"\n";
    else
        cout<<"NO"<<"\n";
}

