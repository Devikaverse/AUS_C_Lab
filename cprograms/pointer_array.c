#include<stdio.h>
int main()
{
    int arr[5]={2,5,4,3,9},i;
    for(i=0;i<5;i++)
    {
        printf("[index %d] address:%u value:%d\n",i,(arr + i),*(arr + i));
    }
}