#include<stdio.h>
#include<string.h>
int main(){
    int i;
char str1[110],str2[110],d;
//for(i=0;i!='\0';i++){
        scanf("%s\n%s",str1,str2);

//l=strlen(str1);
strrev(str1);
//printf("%s",str1);
d=strcmp(str1,str2);
if(d==0)

printf("YES");
else
   printf("NO");
}



