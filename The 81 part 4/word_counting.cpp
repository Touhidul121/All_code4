#include<stdio.h>
#include<string.h>

int main()
{
    char s[100];
    gets(s);
    int cnt=0;
    bool f=false;
    for(int i=0;i<strlen(s);i++)
    {
        if(s[i]!=' '&&s[i+1]==' '){
            cnt++;
        }
        if(s[i]!=' ')
            f=true;
    }
    if(f)
        cnt++;
    printf("%d\n",cnt);

    for(int i=0;i<strlen(s);i++)
    {
        if(s[i]>='a'&&s[i]<='z')
            s[i]=s[i]-'a'+'A';
    }
    printf("%s",s);
}
