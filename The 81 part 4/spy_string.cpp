#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
     int t;
     cin>>t;
     while(t--)
     {
         int n,l;
         cin>>n>>l;
         vector<string>v;
         while(n--)
         {
             string s;
             cin>>s;
             v.push_back(s);
         }
         if(l==1)
            cout<<'z'<<"\n";
         else
         {
             set<char>st1,st2;
             set<string>st;
             string x,r;
             if(l==2)
             {

                 cout<<v[0]<<"\n";
             }
             else{
             for(int i=0;i<v.size();i++)
             {
                  x=v[i];
                 st1.insert(x[0]);
                 r=v[i].substr(1,v[i].size()-2);
                 //cout<<r<<"\n";
                 st.insert(r);
                      r.clear();

                    st2.insert(x[x.size()-1]);
             }
             //cout<<st.size()<<"\n";
             if(st.size()==1&&st1.size()<=2&&st2.size()<=2)
             {

                 string last;
                 last=v[0];
                 char t=last[last.size()-1];
                 if(t==*st2.begin()){
                    v[0].pop_back();
                    v[0]+=*st2.rbegin();
                 }
                else
                {
                    v[0].pop_back();
                    v[0]+=*st2.begin();
                }
                 cout<<v[0]<<"\n";
             }
             else
                cout<<-1<<"\n";

         }
 }    }
}
