#include<bits/stdc++.h>
using namespace std;

int main()
{
    string a,b;
    cin>>a>>b;

    if(a==string(b.rbegin(),b.rend()))
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    return 0;

}
