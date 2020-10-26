#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);

    int n,m;
    cin>>n>>m;
    int arr[n][m];

    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
        cin>>arr[i][j];

    int key;
    cin>>key;
    int i=0,j=m-1;

    pair<int,int>ans={-1,-1};

    while(i>=0 && i<n && j>=0 && j<m)
    {
        if(arr[i][j]==key)
        {
           ans={i,j};
           break;
        }
        else if(arr[i][j]>key)
            j--;
        else if(arr[i][j]<key)
            i++;
    }
    cout<<ans.first<<" "<<ans.second<<"\n";
}
