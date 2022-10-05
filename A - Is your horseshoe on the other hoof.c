#include<stdio.h>
int main(){
   int a[6],c=0,i,temp,j;
    for(i=0;i<4;i++)
        scanf("%d",&a[i]);
    for(i=0;i<3;i++){
            for(j=i+1;j<4;j++){
        if(a[i]>a[j]){
            temp=a[i];
        a[i]=a[j];
        a[j]=temp;}}
        
    }
    for(i=0;i<3;i++){
            
        if(a[i]==a[i+1]){
            c++;
        
        }
    }
printf("%d\n",c);}
