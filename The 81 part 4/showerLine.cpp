#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s="12345";
int z[7][7];
vector<int> v;
int a,b,c,d,e,sum=0;
for(int i=0;i<5;i++)
{
    for(int j=0;j<5;j++)
    {
        cin>>z[i][j];
    }
}
    do
    {
        sum=0;
        a=(s[0]-'0')-1;
        b=(s[1]-'0')-1;
        c=(s[2]-'0')-1;
        d=(s[3]-'0')-1;
        e=(s[4]-'0')-1;
        sum+=z[a][b]+z[b][a]+z[c][d]+z[d][c]+z[b][c]+z[c][b]+z[d][e]+z[e][d]+z[d][e]+z[e][d]+z[c][d]+z[d][c];
        v.push_back(sum);
    }while(next_permutation(s.begin(),s.end()));

    cout<<*max_element(v.begin(),v.end())<<endl;
}
