#include<stdio.h>
int main(){
    int j,n,i,t,count=0,s=0,sum=0,d;
int arr[100];

    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);


    }
    
    for(i=0;i<n-1;i++){
            for(j=i+1;j<n;j++){
    if(arr[i]<arr[j]){
    t=arr[i];
    arr[i]=arr[j];
    arr[j]=t;}
}}
 
 for(i=0;i<n;i++){
     sum=arr[i]+sum;}
    for(i=0;i<n;i++){
        s=s+arr[i];
        d=sum-s;
         count++;
        if(d<s||d==0)


            break;

    }printf("\n%d",count);}

