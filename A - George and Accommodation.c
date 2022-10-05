#include<stdio.h>
int main()
{int arr[101][101];
    int n,p,q,count=0,sub;
    scanf("%d",&n);

    for(p=0;p<n;p++){
    for(q=0;q<2;q++){

        scanf("%d",&arr[p][q]);
    }
    }
    
for(p=0;p<n;p++){
        sub=0;
    for(q=0;q<2;q++){
   sub=arr[p][q]-sub;}

   if(sub>=2)
   count++;
}

        
    printf("%d",count);

}

