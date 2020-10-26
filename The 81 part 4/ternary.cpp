#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
    string a,c;
    cin>>a;
    int l=a.size();
    bool flag1=false,flag2=false;
    int i=0,j=l-1,ind1,ind2,ind3,len,ans=INT_MAX;
    set<char>st;
    for(int i=0;i<l;i++)
        st.insert(a[i]);
    if(st.size()<3)
        cout<<0<<"\n";
    else{
    while(i<j)
    {
       flag1=false;
        while(a[i]==a[i+1]&&i<j)
        {

            i++;
        }
        ind1=i;
        if(a[ind1]!=a[j])
        {
            flag1=true;
            while(a[j]==a[j-1]&&i<j)
            {

                j--;
            }

                ind2=j;
            if(a[ind2-1]!=a[ind1]||a[ind1+1]!=a[ind2])
            {

              len=ind2-(ind1-1);
              ans=min(ans,len);
              if((a[ind1+1]!=a[ind2-1]&&a[ind2-1]!=a[ind1])||(a[ind1+1]!=a[ind2-1]&&a[ind1+1]!=a[ind2]))
                --len;
             flag2=true;
              ans=min(ans,len);

            }
            //cout<<ind1<<" "<<ind2<<"\n";

        }
//cout<<ind1<<" "<<ind2<<"\n";

            i++;
if(flag1)
            j--;


    }
    cout<<ans<<"\n";
    }
    }
}
