#include<stdio.h>
int main(){
 int n,x,y,a[104],b[104],i,c=0,j;
    scanf("%d",&n);
    for(i=0;i<n;i++) {
    scanf("%d %d",&x,&y);
    a[i]=x;
    b[i]=y;}
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(a[i]==b[j])  
            c=c+1;  
                }
        
        
    }
    printf("%d",c);
    return 0;
   
}