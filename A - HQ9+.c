#include<stdio.h>
#include<string.h>
int main()
{
    int i,c=0;
    char s[105],t;
    gets(s);
int d=strlen(s);
    for(i=0;i<d;i++)
    {
        if(s[i]=='H'||s[i]=='Q'||s[i]=='9')
        c++;
    }
    if(c==0)
    printf("NO");
    else
        printf("YES");
}
