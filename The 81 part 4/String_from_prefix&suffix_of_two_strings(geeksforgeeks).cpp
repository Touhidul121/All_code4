#include<bits/stdc++.h>
using namespace std;

string getPrefSuff(string a,string b,int l)
{
    //copy l(5) characters of a starting from index 0
    string prefix=a.substr(0,l);

    int lb=b.size();
    //----start copying characters of b starting from index lb-l;
    string suffix=b.substr(lb-l);

    return (prefix+suffix);
}


int main()
{
    string a="remuneration";
    string b="aquiesce";

    int l=5;
    cout<<getPrefSuff(a,b,l);
    return 0;
}
