#include<stdio.h>
int main()
{
    int n = 5;
    int i=1;                                                                                                        
    printf("multiplication table of %d:\n",n);
    while (i<=10)
    {
        printf("%d x %d =%d\n",n,i,n*i);
        i++;
    }
    return 0;
}