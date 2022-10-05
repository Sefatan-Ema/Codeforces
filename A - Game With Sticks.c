#include<stdio.h>
int main()
{
    int n,m,c=0,s;
    scanf("%d %d",&n,&m);
    s=m*n;
    while(s>0){
        c++;
        if(n>m)
        s=s-n;
        else
        s=s-m;
    }
   
if(c%2==0)
    printf("Malvika");
else
    printf("Akshat");
}
