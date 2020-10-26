#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b;
    cin>>a>>b;

        int cnt=0;
        while(b>a)
        {
            if(b%2==0)
                b=b/2;
            else
                b++;
            cnt++;
        }
        if(a!=b)
            cnt+=a-b;
        cout<<cnt<<"\n";

}
