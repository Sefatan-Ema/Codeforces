#include<stdio.h>
int main()
{

{

}    int n,p,q,i,sum1=0,sum2=0,j,sum=0;
    scanf("%d",&n);
    int arr1[101],arr2[101];
    scanf("%d",&p);
    for(i=0;i<p;i++)
    {
        scanf("%d",&arr1[i]);
    }
    scanf("%d",&q);
    for(i=0;i<q;i++)
    {
        scanf("%d",&arr2[i]);

    } 
    for(i=0;i<p;i++)
    {
      sum1=sum1+arr1[i];
    }
    for(i=0;i<q;i++)

      sum2=sum2+arr2[i];

       for(i=0;i<q;i++)
    {
         for(j=0;j<p;j++){
            if(arr1[j]==arr2[i])
                sum2=sum2-arr2[i];
         }
    }for(i=1;i<=n;i++)
    {
      sum=sum+i;
    }
   if(sum1+sum2>=sum)
    printf("I become the guy.");
    else
         printf("Oh, my keyboard!");
}
