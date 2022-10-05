#include<stdio.h>
int main(){
char play[110];
int i,count=1;
scanf("%s",&play);

for(i=0;play[i]!='\0';i++)
    {
        if(count==7)
            break;
if(play[i]==play[i+1])
    count++;
    
    else
        count=1;
    }

    if(count>=7)
    printf("\nYES");
else
    printf("\nNO");
}
