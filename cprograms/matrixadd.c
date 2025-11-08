#include<stdio.h>
int main()
{
    int R,C;
    printf("enter the number of rows and columns\n");
    scanf("%d %d",&R,&C);
    printf("enter values one by one\n");
    int a[R][C],b[R][C],c[R][C],i,j;
    for(i=0;i<R;i++)
    {
        for(j=0;j<C;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<R;i++)
    {
        for(j=0;j<C;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    for(i=0;i<R;i++)
    {
        for(j=0;j<C;j++)
        {
            c[i][j]=a[i][j]+b[i][j];
        }
    }
    for(i=0;i<R;i++)
    {
        for(j=0;j<C;j++)
        {
            printf("%d  ",c[i][j]);
        }
        printf("\n");
    }
    return 0;
    }