#include<stdio.h>
int main()
{int i,n,r,count,j;
scanf("%d",&n);
int temp;
for(i=4;i<=n;i++){
        count=0;
j=0;
temp=i;
    while(temp!=0){
            j++;
r=temp%10;
temp=temp/10;
if(r==4||r==7)
 count++;}

if(count==j&&n%i==0)
    break;}
   // printf("%d ",n%i);
//if(n%i==0)
if(count==j&&n%i==0)
printf("YES");

else{
  count=0;
temp=n;
while(temp!=0){
    j++;
r=temp%10;
temp=temp/10;
if(r==4||r==7)
    count++;}
if(count==j)
   
    printf("YES");


else
printf("NO");}


}

