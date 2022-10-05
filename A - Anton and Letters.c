#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,c=0;
    char s[1003],t;
    gets(s);
int d=strlen(s);
    for(i=0;i<d-1;i++){
      for(j=i+1;j<d;j++) {
        if(s[i]>s[j])
        {
            t=s[i];
            s[i]=s[j];
            s[j]=t;}
      }}
      for(i=0;i<d;i++) {
      if(s[i]>=97&&s[i]<=122){
            c++;
        if(s[i]==s[i+1])
        c--;
        }}printf("%d",c);
}
