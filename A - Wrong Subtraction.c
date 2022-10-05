#include<stdio.h>
int main(){
int n,d,k,i;
scanf("%d%d",&n,&k);
for(i=1;i<=k;i++){
    d=n%10;
    if(d==0)
    n=n/10;
    else
        n=n-1;
  
}printf("%d",n);
}