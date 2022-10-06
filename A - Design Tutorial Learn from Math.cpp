#include<stdio.h>
//using namespace std;
int composite(int m){
int c=0,j;
for(j=2;j<=m/2;j++){
    if(m%j==0){
        c=1;
    return 1;
break;}
else
   c=0;}
   if(c==0)
    return 0;}
int main(){
int n,i;
//cin>>n;
scanf("%d",&n);
for(i=4;i<=n/2;i+=2)
    if(composite(n-i)==1){
//cout<<i<<" "<<n-i<<endl;
printf("%d %d",i,(n-i));
break;}
else
    continue;
}
