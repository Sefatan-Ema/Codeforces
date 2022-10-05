#include<stdio.h>
int main()
{
    int n,i,j,s[101],d;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&s[i]);
    }
     for(i=0;i<n;i++){
             for(j=n-1;j>=i;j--){
     if(s[i]>s[j]){
     d=s[i]-s[j];
     s[j]=s[j]+d;
     s[i]=s[i]-d;}}
     }
     for(i=0;i<n;i++){
     printf("%d ",s[i]);}}
