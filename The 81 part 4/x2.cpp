#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    int t;
    cin>>t;
    while(t--){
        string s,w;
        int i,j,k,n,x;
        cin>>s>>x;
        n=s.size();
        w=string(n,'1');
        bool f=false;
        for(i=0;i<n;i++){
            if(s[i]=='0'){
                if(x+i<n){
                    w[i+x]='0';
                }
                if(i-x>=0){
                    w[i-x]='0';
                }
            }
        }
        for(i=0;i<n;i++){
             if(s[i]=='1')
                {
                if(i-x<0 &&i+x<n)
                {
                    if(w[i+x]!='1')
                    {
                        f=true;break;
                    }
                }
                else if(i-x>=0 && i+x>n)
                {
                    if(w[i-x]!='1')
                    {
                        f=true;break;
                    }
                }
                else if(i-x>=0 && i+x<n)
                {
                    if(w[i-x]=='0'&& w[i+x]=='0')
                    {
                        f=true;break;
                    }
                }
                }
            }

        if(f){
            cout<<-1<<endl;
        }
        else{
            cout<<w<<endl;
        }
    }

}
