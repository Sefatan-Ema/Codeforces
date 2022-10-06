#include<stdio.h>
#include<string.h>
int main(){
int i,j,l1,l2;
char s1[103],s2[103],s3[103],t;
scanf("%s",&s1);
scanf("%s",&s2);
scanf("%s",&s3);
strcat(s1,s2);
l1=strlen(s1);
l2=strlen(s3);

if(l1==l2){
for(i=0;i<l1-1;i++){
      for(j=i+1;j<l1;j++) {
        if(s1[i]>s1[j])
        {
            t=s1[i];
            s1[i]=s1[j];
            s1[j]=t;
        }
      }}
    for(i=0;i<l2-1;i++){
      for(j=i+1;j<l2;j++) {
        if(s3[i]>s3[j])
        {
            t=s3[i];
            s3[i]=s3[j];
            s3[j]=t;
        }
      }}

     int d=strcmp(s1,s3);


      if(d==0)
        printf("YES");
   else
    printf("NO");
}
        else
            printf("NO");
}
