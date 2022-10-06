#include<stdio.h>
int main()
{
    int s,n,j,a,b,i,c=0,x[100000],y[100000],t;
    scanf("%d %d",&s,&n);

    for(i=0;i<n;i++)
    {
       scanf("%d %d",&a,&b);
       x[i]=a;
       y[i]=b;

    }
    for(i=0;i<n-1;i++){
      for(j=i+1;j<n;j++) {
        if(x[i]>x[j])
        {
            t=x[i];
            x[i]=x[j];
            x[j]=t;
            t=y[i];
            y[i]=y[j];
            y[j]=t;}}}
    for(i=0;i<n;i++){
    if(s<=x[i]){
       c=0;
        break;}
    else{
        s=s+y[i];
        c++;
}}
if(c<n)
printf("NO");
else
 printf("YES");

}
