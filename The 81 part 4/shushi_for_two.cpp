#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,count=0,count1=0,count2=0,count3=0,a,x=0,y=0;
    cin>>n;

    bool b=true,c=true;
    vector<int>v;
    v.push_back(0);
    for(int i=0;i<n;i++)
    {

        cin>>a;
        if(a==2)
        {
            count1++;
            x=count1;
            count=0;
        }
        else if(x>0&&a==1)
        {
            count+=2;
            x--;
            count1=0;
v.push_back(count);
        }
        if(a==1)
        {
            count2++;
            y=count2;
            count3=0;
        }
        else if(y>0&&a==2)
        {
            count3+=2;
            y--;
            count2=0;
            v.push_back(count3);

        }

}
cout<<*max_element(v.begin(),v.end())<<endl;

}
