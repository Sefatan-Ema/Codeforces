#include<stdio.h>
int main(){
    int x,ar[102],s=0,i;
    float d;
    scanf("%d",&x);
    for(i=0;i<x;i++){
        scanf("%d",&ar[i]);
    s=s+ar[i];}
    d=(float)s/x;
    printf("%.12f",d);}
