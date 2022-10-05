#include<stdio.h>
int main()
{
    int i,c=0,n,s[103];
    scanf("%d",&n);
        for(i=0;i<n;i++){
            scanf("%d",&s[i]);
            if(s[i]==0)
                c++;
            else{
                c=0;
                break;}
        }
    if(c==0)
    printf("HARD");
    else
     printf("EASY");
}
