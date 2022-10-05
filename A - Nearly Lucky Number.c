#include<stdio.h>
int main()
{long long int n, i,r,count,j,c=0;

scanf("%lld",&n);
long long int temp;
temp=n;
    while(temp!=0){

r=temp%10;

if(r==4||r==7)
 c++;
 temp=temp/10;

 }//printf("%lld",c);
    if(c==0)
printf("NO");


else{
temp=c;
count=0;
j=0;
while(temp!=0){
        j++;
r=temp%10;

if(r==4||r==7)
    count++;
    temp=temp/10;}
if(count==j)

    printf("YES");


else
printf("NO");}
}




