#include<stdio.h>
int main(){

int a,b,c,A,B,C,D,E,F,max;
scanf("%d%d%d",&a,&b,&c);

A=a*b*c;
B=a*(b+c);
C=(a+b)*c;
D=a+b*c;
E=a*b+c;
F=a+b+c;
if(A>B){
  max=A;
}
else{
    max=B;
}
 if(C>D){
        if(C>max)
    max=C;
}

else {if(D>max)

      max=D;
       }

if(E>F){
        if(E>max)
    max=E;
}

else {if(F>max)

      max=F;
       }
    printf("%d",max);
}
