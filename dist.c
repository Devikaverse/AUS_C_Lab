#include<stdio.h>
int main()
{
    float distance,speed,time;
    printf("enter the speed of the object\n");
    scanf("%f",&speed);
    printf("enter the time taken by the object\n");
    scanf("%f",&time);
    distance=speed*time;
    printf("distance=%.2f",distance);
    return 0;
}