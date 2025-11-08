#include<stdio.h>
int main()
{
    float km,m,cm,mm;
    printf("enter distance in kms\n");
    scanf("%f",&km);
    m=km*1000.0;
    cm=km*100000.0;
    mm=km*1000000.0;
    printf("distance in meter is %f\n",m);
    printf("distance in centimeter is %f\n",cm);
    printf("distance in millimeter is %f\n",mm);
    return 0;
}