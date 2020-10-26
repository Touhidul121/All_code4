#include<iostream>
#include<cstdio>
#include<algorithm>
#include<string>
#define dd(x) cout<<#x<<" = "<<x<<" "
#define de(x) cout<<#x<<" = "<<x<<"\n"
#define pb push_back
#define mp make_pair
#define fi first
#define se second
#define lson l,m,rt<<1
#define rson m+1,r,rt<<1|1
#include<string.h>
using namespace std;
typedef long long ll;
typedef long double ld;
const int maxn=1e6+10,mod=1e9+7,INF=0x3f3f3f3f;
char s[maxn];
int ne[maxn],cnt[maxn];
void init()
{
    ne[0]=-1;
    for (int i=1;s[i];++i)
    {
        int j=ne[i-1];
        while (s[j+1]!=s[i]&&j>=0)
            j=ne[j];
        if (s[j+1]==s[i])
            ne[i]=j+1;
        else
            ne[i]=-1;
    }
}
int main()
{
    scanf("%s",s);
    init();
    int n=strlen(s);
    for (int i=0;i<n;++i)
        cnt[i]=1;
    for (int i=n-1;i;--i)
        cnt[ne[i]]+=cnt[i];

    for(int i=0;i<n;i++)
        cout<<ne[i]<<" ";
    for (int i=ne[n-1];i!=-1;i=ne[i])
    {
        if (cnt[i]>=3)
        {
            for (int j=0;j<=i;++j)
                printf("%c",s[j]);
            return 0;
        }
    }
    printf("Just a legend");
    return 0;
}
