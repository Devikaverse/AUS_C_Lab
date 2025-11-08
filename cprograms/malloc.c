#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,i,*ptr,sum=0;
    printf("Enter the number of elements:");              
    scanf("%d",&n);
    ptr= (int*)malloc(n*sizeof(int));
    if(ptr == NULL)
    {
        printf("Memory not allocated.\n");
        exit(0);
    }
    printf("enter the elements:");
    for(i=0;i<n;i++)
    {
        scanf("%d",ptr+i);
    }
    for(i=0;i<n;i++)
    {
        printf("the elements are %d\n",*(ptr+i));
    }
    return 0;

}