#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){
ios_base::sync_with_stdio(false);
    cin.tie(NULL);


        ll n;
        cin>>n;
        ll a[n];

        for(ll i=0;i<n;i++)
        {
            cin>>a[i];
        }
        ll sum1=0,sum2=0,x=0,i=-1,j=n;

        while(i<j)
        {

//cout<<sum1<<" "<<sum2<<"\n";
          if(sum1==sum2)
          {
              x=sum1;
i++;
j--;
              sum1+=a[i];
              sum2+=a[j];


          }
          if(sum1<sum2){
            i++;
            sum1+=a[i];
          }
          if(sum2<sum1){
            j--;
            sum2+=a[j];
          }
        }
        cout<<x<<"\n";

    }
