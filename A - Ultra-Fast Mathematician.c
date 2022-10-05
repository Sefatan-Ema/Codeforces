#include<stdio.h>
int main()
{
    int i;
    char a[103],b[103];
    scanf("%s",&a);
    scanf("%s",&b);
    for(i=0;a[i]!='\0';i++)
    {
        if(a[i]!=b[i])
        printf("1");
        else
          printf("0");

    }
}
