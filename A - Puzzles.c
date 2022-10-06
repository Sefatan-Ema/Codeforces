#include<stdio.h>
int main()
{
    int i,j,c,s[1003],t,n,m,d,min=1000;
    scanf("%d",&n);
scanf("%d",&m);
 for(i=0;i<m;i++)
    scanf("%d",&s[i]);

    for(i=0;i<m-1;i++){
      for(j=i+1;j<m;j++) {
        if(s[i]>s[j])
        {
     t=s[i];
            s[i]=s[j];
            s[j]=t;}
      }}

      for(i=0;i<m;i++){
      for(j=i+n-1;j<m;j++) {

        d=s[j]-s[i];
        if(d<0)
            d=d*(-1);
      
        if(min>d)
            min=d;
            break;
      }

      }
      printf("%d",min);}
