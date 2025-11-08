#include<stdio.h>
int main()
{
    float area,base,height;
    printf("enter the value of base\n");
    scanf("%f",&base);
    printf("enter the value of height\n");
    scanf("%f",&height);
    area=0.5*base*height;
    printf("area of triangle with base %f and height %f is %f",base,height,area);
    return 0;

}