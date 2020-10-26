#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s1,s2;
    cin>>s1>>s2;

    int h1,m1,h2,m2;

        h1=(s1[0]-'0')*10+(s1[1]-'0')*1;
    h2=(s2[0]-'0')*10+(s2[1]-'0')*1;

    m1=(s1[3]-'0')*10+(s1[4]-'0')*1;
    m2=(s2[3]-'0')*10+(s2[4]-'0')*1;

    int min_diff=(h2*60)-(h1*60)+(m2-m1);
//cout<<min_diff<<endl;
    int h=h1*60+min_diff/2;
    //cout<<h<<endl;
    int rest=m1+h%60;
    h=(h/60);
    if(rest>=60)
    {
        h++;
        rest=(rest-60);
    }


   //cout<<rest<<endl;

       if(h>=10&&rest>=10)
   {
       cout<<h<<":"<<rest<<endl;

   }


   else if(h<10&&rest>=10)
    cout<<0<<h<<":"<<rest<<endl;
    else if(h>=10&&rest<10)
        cout<<h<<":"<<0<<rest<<endl;
        else if(h<10&&rest<10)
            cout<<0<<h<<":"<<0<<rest<<endl;
}
