#include<stdio.h>
int main()
{
    float a,r;
    printf("enter the radius of circle");
    scanf("%f",&r);
    a=3.14*r*r;
    printf("the area of circle with radius %f is %f",r,a);
    return 0;
}