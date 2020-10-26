#include<bits/stdc++.h>
using namespace std;

void insert(stack<int>&stk1,int val)
{
    if(stk1.size()==0 || val>=stk1.top())
    {
        stk1.push(val);return;
    }
    int tmp=stk1.top();
    stk1.pop();
    insert(stk1,val);
    stk1.push(tmp);

}
void _sort(stack<int>&stk)
{
    if(stk.size()==1)
        return;

    int tmp=stk.top();
    stk.pop();
    _sort(stk);
    insert(stk,tmp);
}

int main()
{
    int n,a;
    cin>>n;
    stack<int>stk;
    for(int i=0;i<n;i++)
        cin>>a , stk.push(a);

        _sort(stk);
        while(!stk.empty()){
            cout<<stk.top()<<" ";
            stk.pop();
        }
}

