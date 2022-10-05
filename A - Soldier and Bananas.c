#include<stdio.h>
int main(){
int k,n,w,sum=0,b,i;
scanf("%d%d%d",&k,&n,&w);
for(i=1;i<=w;i++){
    sum=sum+k*i;

}
if(sum>n){
   b=sum-n;
   printf("%d",b);}
   else
    printf("0");
}
