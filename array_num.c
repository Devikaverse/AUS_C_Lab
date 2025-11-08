#include<stdio.h>
int main()
{
    int a[2][2],b[2][2],i,j;
    printf("enter the values\n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            scanf("%d\n",&a[i][j]);
        }
    }
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            scanf("%d\n",&b[i][j]);
        }
    }
            printf("%d ",a[1][0]); 
            printf("%d ",b[1][0]);
            return 0;
}