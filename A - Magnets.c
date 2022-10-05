#include<stdio.h>//first step
int main()
{

    int str[100010],n,count=0,i,j;
    scanf("%d",&n);
for(i=0;i<n;i++){
    scanf("%d",&str[i]);}
    if(n==1)
printf("%d",n);
else{
          for(i=0;i<n;i=i+1){
         if(str[i]!=str[i+1])

count++;
    break;
    }
    for(j=i;j<n-1;j++){
for(i=i+1;i<n-1;i++){
         if(str[i]!=str[i+1])
            count++;
 break;
    }}
    printf("%d",count+1);
    }}
