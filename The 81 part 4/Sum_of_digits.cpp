#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

ll getsum(string s)
{
    ll res=0;
    for(int i=0;i<s.size();i++)
        res+=s[i]-'0';
    return res;
}
int main()
{
    string s;
    cin>>s;

    ll cnt=0,res;

        while(s.size()>1)
        {
           res=getsum(s);
            s=to_string(res);
            cnt++;
        }
        cout<<cnt<<"\n";

}
