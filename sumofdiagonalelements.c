#include <stdio.h>
#include <conio.h>
int main()
{
    int x[4][4],i,j,sum=0;
    printf("Enter the values in a 2-D Array\n");
    for (i=0;i<4;i++)
    {
        for (j=0;j<4;j++)
        {
            scanf("%d",&x[i][j]);
        }
    }
    for (i=0;i<4;i++)
    {
        for (j=0;j<4;j++)
        {
            if(i==j)
            {
                sum=sum+x[i][j];
            }
        }
    }
    printf("Sum of the diagonal elements is %d",sum);
    return 0;
}