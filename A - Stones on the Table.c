#include<stdio.h>
int main()
{
    int n,i;
    char s[70];
    scanf("%d",&n);

scanf("%s",&s);


    int count=0;
    for(i=0;i<n;i++){
        if(s[i]==s[i+1])
        count++;


    }
    printf("%d",count);

}
