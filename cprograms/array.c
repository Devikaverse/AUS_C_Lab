#include<stdio.h>
int main()
{
    int a[10],i;
    printf("enter the values");
    for (i=1;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
        printf("%d\n",a[4]);
    return 0;
}