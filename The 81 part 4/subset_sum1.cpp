#include <bits/stdc++.h>
using namespace std;


bool isSubsetSum(int set[], int n, int sum)
{

    bool subset[n + 1][sum + 1];


    for (int i = 0; i <= n; i++)
        subset[i][0] = true;


    for (int i = 1; i <= sum; i++)
        subset[0][i] = false;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= sum; j++) {
            if (j < set[i - 1])
                subset[i][j] = subset[i - 1][j];
            if (j >= set[i - 1])
                subset[i][j] = subset[i - 1][j]
                               || subset[i - 1][j - set[i - 1]];
        }
    }



    return subset[n][sum];
}


int main()
{
    int t;
    cin>>t;
    while(t--){
    int n;
    cin>>n;

    int set[n];
    for(int i=0;i<n;i++)
        cin>>set[i];
    int sum;
    cin>>sum;
    if (isSubsetSum(set, n, sum) == true)
        printf("YES\n");
    else
        printf("NO\n");

    }
}