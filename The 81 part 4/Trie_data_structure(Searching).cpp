#include<bits/stdc++.h>
using namespace std;

struct trie
{
    struct trie* child[26];
    bool isend;

    trie()
    {
        memset(child,0,sizeof(child)); // 0 means NULL
        isend=false;

    }
};
struct trie *root;

void insert(string str)
{
   struct trie *cur=root;

   for(char ch:str)
   {
       int idx=ch-'a';
       if(cur->child[idx]==NULL)
       {
           cur->child[idx]=new trie;
       }
       cur=cur->child[idx];
   }
   cur->isend=true;
}

bool search(string str)
{
    struct trie *cur=root;

    for(char ch:str)
    {
        int idx=ch-'a';
        if(cur->child[idx]==NULL)
            return false;
            cur=cur->child[idx];
    }
    return cur->isend;
}
int main()
{
    root=new trie;
    int n;
    cin>>n;

    while(n--)
    {
        string str;
        cin>>str;
        insert(str);
    }
    int q;
    cin>>q;
    while(q--)
    {
        string s;
        cin>>s;
        if(search(s))
            cout<<s<<" is Present "<<"\n";
        else
            cout<<s<<" is not Present "<<"\n";
    }
}
