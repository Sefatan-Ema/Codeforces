#include<stdio.h>
int main()
{
   long int n,l,i,j,a[1002],t,d;
    double max=0.0;
    scanf("%d %ld",&n,&l);
   for(i=0;i<n;i++){
    scanf("%d",&a[i]);
   }for(i=0;i<n-1;i++){
      for(j=i+1;j<n;j++) {
        if(a[i]>a[j])
        {
            t=a[i];
            a[i]=a[j];
            a[j]=t;}}}
            for(i=0;i<n;i++)
            
   for(i=1;i<n;i++){
        d=a[i]-a[i-1];
       
   if(max<d)
    max=(double)d;}
    
   max=max/2;
   if((a[0]>0)&&(max<(a[0]-0)))
   {max=a[0]-0.0;
   }
    if((a[n-1]<l)&&(max<(l-a[n-1])))
       {max=(double)l-a[n-1];
      }
   printf("%.10f",max);}
