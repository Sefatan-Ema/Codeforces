#include<stdio.h>
int main()
{
    int i,c=0,s[1003],n,k;
    scanf("%d",&n);
scanf("%d",&k);
 for(i=0;i<n;i++)
    scanf("%d",&s[i]);

for(i=0;i<n;i++){
    if(s[i]!=0&&s[i]>=s[k-1])
        c++;}
    printf("%d",c);}
