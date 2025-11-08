#include<stdio.h>
int main()
{
    float length,breadth,area;
    printf("enter the value of length\n");
    scanf("%f",&length);
    printf("enter the value of breadth\n");
    scanf("%f",&breadth);
    area=length*breadth;
    printf("the area of rectangle with length %f and breadth %f is %f",length,breadth,area);
    return 0;
}