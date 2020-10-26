#include<bits/stdc++.h>
using namespace std;


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin>>n;
    int a[n];

    for(int i=0;i<n;i++)
        cin>>a[i];

    int l=0,m=0,h=n-1;
    while(m<=h)
    {
        if(a[m]==0)
        {
            swap(a[l],a[m]);
            l++,m++;
        }
        else if(a[m]==1)
        {
            m++;
        }
        else if(a[m]==2)
        {
            swap(a[m],a[h]);
            h--;
        }
    }
    for(int x:a)
        cout<<x<<" ";
}
