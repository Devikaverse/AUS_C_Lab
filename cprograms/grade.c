#include<stdio.h>
int main()
{
    int marks;
    printf("enter the marks\n");
    scanf("%d\n",&marks);
    if(marks >= 90)
    {
        printf("A grade\n");
    }
    else if (marks>=80 && marks <=89)
    {
        printf("b grade\n");
    }
    else if (marks>=60 && marks <=79)
    {
        printf("c grade\n");
    }
    else
    {
        printf("D grade\n");
    }
    return 0;
}
