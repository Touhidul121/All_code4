#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
    double n;
    cin>>n;
    double x;
    n=2*n;

    x=(180-(360.00/n))/2.0;
    double ang=(acos(-1)*x)/180.00;
    double l=tan(ang)*0.5;

    cout<<fixed<<setprecision(9)<<l*2<<"\n";/* here l = normal distance from the center of
                                            regular polygon to the side(Apothem)*/
    }

}
