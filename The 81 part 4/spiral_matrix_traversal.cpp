#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n,m;
    cin>>n>>m;

    int a[n][m];

    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
        cin>>a[i][j];

    int top=0,down=n-1,left=0,right=m-1;
    int dir=0;

    while(left<=right && top<=down)
    {
       if(dir==0)
       {
           for(int i=left;i<=right;i++)
            cout<<a[top][i]<<" ";
           cout<<"\n";
           top++;
       }
       else if(dir==1)
       {
           for(int i=top;i<=down;i++)
           cout<<a[i][right]<<" ";
           cout<<"\n";
           right--;

       }
       else if(dir==2)
       {
           for(int i=right;i>=left;i--)
           cout<<a[down][i]<<" ";
           cout<<"\n";
           down--;
       }
       else if(dir==3)
       {
           for(int i=down;i>=top;i--)
           cout<<a[i][left]<<" ";
           cout<<"\n";
           left++;
       }
       dir=(dir+1)%4;
    }
}
