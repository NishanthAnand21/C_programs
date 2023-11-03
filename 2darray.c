#include <stdio.h>
#include <conio.h>
int main()
{
    int x[4][4],i,j,lb,ub,merge[],k;
    printf("Enter the values in a 2-D Array\n");
    for (i=0;i<10;i++)
    {
        for (j=0;j<10;j++)
        {
            scanf("%d",&x[i][j]);
        }
    }
    for (i=0;i<10;i++)
    {
        for (j=0;j<10;j++)
        {
           merge[k]=x[i][j];
              k++;
        }
    }
    printf("Enter the lower bound and upper bound\n");
    scanf("%d%d",&lb,&ub);
    for (i=0;i<10;i++)
    {
        if (merge[i]>=lb && merge[i]<=ub)
        {
            y[i]=merge[i];
        }
    }
    printf("The values in the 2-D array are\n");
    for (i=0;i<10;i++)
    {
        for (j=0;j<10;j++)
        {
            printf("%d",x[i][j]);
        }
    }

} 
