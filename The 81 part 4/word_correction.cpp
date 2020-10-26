#include<bits/stdc++.h>
using namespace std;

int vowel(char ch)
{
    if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='y')
        return 1;
    else
        return 0;
}
int main()
{
    int n;
    cin>>n;
    string s;
    cin>>s;

    vector<char>v2,v1;

for(int i=0;i<n-1;i++)
{
    if(vowel(s[i])==1&&s[i]==s[i+1])
        continue;
    else
        if(vowel(s[i])==1&&vowel(s[i+1])==1)
    {
        v2.push_back(s[i]);
        i++;
    }
    else
        v2.push_back(s[i]);
}
if(v2[v2.size()-1]!=s[n-1])
    v2.push_back(s[n-1]);
for(int i=0;i<v2.size();i++){

    if(vowel(v2[i])==1&&v2[i]==v2[i+1])
            continue;

    else
        v1.push_back(v2[i]);
}
if(v1[v1.size()-1]!=v2[v2.size()-1])
    v1.push_back(s[n-1]);

    for(int i=0;i<v1.size();i++)
        cout<<v1[i];
cout<<endl;
}
