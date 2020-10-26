#include<bits/stdc++.h>
using namespace std;

#define N 150001

bool isPrime(int n)
{
    for(int i=2;i*i<=n;i++)
    {
        if(n%i==0)
            return false;
    }
    return true;
}
struct data
{
 int a;
 int b;

}ar[N];
int main()
{

    int t,x,m=INT_MAX,ans=0;
    cin>>t;
    for(int i=0;i<t;i++){
      cin>> ar[i].a;
      cin>>ar[i].b;
    }
    int a=ar[0].a,b=ar[0].b;

    set<int>st;
    vector<int>v;
    for(int i=1;i*i<=a;i++)
    {
        if(a%i==0)
            st.insert(i),st.insert(a/i);
    }
    for(int i=1;i*i<=b;i++)
        if(b%i==0)
        st.insert(i),st.insert(b/i);
    st.erase(1);
    if(st.size()==0)
        cout<<-1<<"\n";
    else{
    for(auto x:st)
    {
     if(isPrime(x))
     v.push_back(x);
    }
    int cnt=0;
    for(int j=v.size()-1;j>=0;j--){
            x=v[j];
    for(int i=0;i<t;i++)
    {
        a=ar[i].a,b=ar[i].b;
      if(a%x==0 || b%x==0)
        cnt++;
    }
    if(cnt==t){
        cout<<x<<"\n";
        return 0;
    }
    cnt=0;

    }
    cout<<-1<<"\n";

    }

}
