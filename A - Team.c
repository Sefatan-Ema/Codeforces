#include<stdio.h>
int main()
{int team[1010][40];
    int n,i,j,count,num=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=3;j++)
            scanf("%d",&team[i][j]);
    }

 for(i=1;i<=n;i++)
    {count=0;
        for(j=1;j<=3;j++){
            if(team[i][j]==1)
                count++;

        }
        if(count>=2)
        num++;
    }

printf("%d",num);


}
