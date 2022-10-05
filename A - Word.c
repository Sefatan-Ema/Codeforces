#include<stdio.h>
int main()
{
    char word[110];
int i,count=0,s=0;
   scanf("%s",&word);
     for(i=0;word[i]!='\0';i++){
 if(word[i]>='a'&&word[i]<='z')
    count++;
 else
    s++;}
 if(count>=s) {
    for(i=0;word[i]!='\0';i++){
    if(word[i]>='A'&&word[i]<='Z')
    word[i]+=32;}

  }
 else {
        for(i=0;word[i]!='\0';i++){
 if(word[i]>='a'&&word[i]<='z')

     word[i]-=32;}}


             printf("%s",word);

}

