#include<stdio.h>
int main(){
char str[100010];
int n,i,anton=0,danik=0;
//for(i=0;str!='\0';i++){
scanf("%d",&n);

scanf("%s",&str);
for(i=0;str[i]!='\0';i++){

if(str[i]=='A')
anton++;}


danik=n-anton;

if(anton>danik)
printf("Anton");
else if(anton<danik)
    printf("Danik");
else
    printf("Friendship");
}
