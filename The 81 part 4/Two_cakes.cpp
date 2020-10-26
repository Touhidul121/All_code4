#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,a,b;
    cin>>n>>a>>b;
    int first_plate,second_plate;

    int x;
    vector<int>v;

    for(x=1;x<n;x++)
    {
        first_plate=a/x;
        second_plate=b/(n-x);

        v.push_back(min(first_plate,second_plate));
    }

    cout<<*max_element(v.begin(),v.end())<<"\n";
}
