#include<stdio.h>
int main()
{
    int N,a[10][10];
    printf("enter the size of array\n");
    scanf("%d",&N);
    printf("enter the elements of array\n");
    for(int i=0;i<N;i++)
    {
        for(int j=0;j<N;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(int i=0;i<N;i++)
    {
        for(int j=0;j<N;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    printf("%d\n",a[1][0]);
    return 0;
}