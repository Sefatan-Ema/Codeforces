#include<stdio.h>
int main(){
int n,arr[200],max=0,min=100,i,c,a,b,x,y;
scanf("%d",&n);
for(i=0;i<n;i++)
    scanf("%d",&arr[i]);
    for(i=0;i<n;i++){
    if(max<arr[i])
        max=arr[i];
    if(min>arr[i])
        min=arr[i];


}
//printf("%d %d\n",max,min);
if(max==arr[0]&&min==arr[n-1])
    c=0;
else{
for(i=0;i<n;i++){
if(arr[i]==max)
   {
//printf("%d\n",i);
    x=i;
    a=i-1;
    break;
    }}for(i=0;i<n;i++){
    if(arr[i]==min){
            //printf("%d\n",i);
    y=i;
    b=n-i;}
}if(x>y)
c=(a+b)-1;
else
  c=(a+b);}
printf("%d",c);
}
