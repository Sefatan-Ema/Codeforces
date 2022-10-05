#include<stdio.h>
int main(){
int n,i,c=1,j,t;
char s[103];
scanf("%d",&n);
scanf("%s",&s);
        if(n<26)
            printf("NO");
        else
            {

for(i=0;i<n;i++){
if(s[i]>=65&&s[i]<=90)
    s[i]=97+s[i]-65;
}
for(i=0;i<n-1;i++){
      for(j=i+1;j<n;j++) {
        if(s[i]>s[j])
        {
            t=s[i];
            s[i]=s[j];
            s[j]=t;
        }
      }}
for(i=0;i<n-1;i++){
      if(s[i]!=s[i+1])
      c++;
}
if(c==26)
    printf("YES");
else
    printf("NO");
}}
