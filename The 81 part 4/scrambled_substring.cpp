// code puro aivabe koro .. This is the best implementation(so far by me)
#include<bits/stdc++.h>
using namespace std;
map<string,int>dp;
bool solve(string s1,string s2)
{
    if(s1.compare(s2)==0)
        return true;
    if(s1.size()<=1) // string er length 1 hobar por o jodi match na kore tobe scrable noy .Amar agei compare korchi aijonne aita likhte partechi karon 1 length er string ar vangbe na
        return false;

    string t="";
    t+=s1;
    t+=s2;
    if(dp.find(t)!=dp.end())return dp[t];
    bool flag=false;
    int n=s1.size();

    for(int i=1;i<=n-1;i++)
    {
        bool f1=false,f2=false;
        if(solve(s1.substr(0,i),s2.substr(n-i,i))&&solve(s1.substr(i,n-i),s2.substr(0,n-i)))
            f1=true;

        else if(solve(s1.substr(0,i),s2.substr(0,i))&&solve(s1.substr(i,n-i),s2.substr(i,n-i)))
        f2=true;

        if(f1 || f2)
        {
            flag=true;break;
        }
    }
    return dp[t]=flag;

}
int main()
{
    string s1,s2;
    cin>>s1>>s2;

    if(s1.size()!=s2.size())
        cout<<"NO"<<"\n";
    else
    {
        if(s1.size()==0 && s2.size()==0)
            cout<<"YES"<<"\n";
        else
        {
            if(solve(s1,s2))cout<<"YES"<<"\n";
            else cout<<"NO"<<"\n";
        }
    }
}
