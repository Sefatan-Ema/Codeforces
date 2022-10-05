#include<stdio.h>
int main()
{
    int i;
    char str[201];
  
    scanf("%s",&str);
    for(i=0;str[i]!='\0'; ){
    if(str[i]=='W'&&str[i+1]=='U'&&str[i+2]=='B'){

       printf(" ");
         i=i+3;}
else{
        printf("%c",str[i]);
   i++;}
    }

}
