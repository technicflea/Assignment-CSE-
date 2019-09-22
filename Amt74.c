#include<stdio.h>

int main() 
{
    float a,b,c,d,x,y;
    printf("please enter the coordinates of two points");
    printf("\na,b=");
    scanf("%f%f",&a,&b);
    printf("\nc,d=");
    scanf("%f%f",&c,&d);
    x=(a+c)/2;
    y=(b+d)/2;
    printf("\nthe mid point is (%f,%f)",x,y);
    return 0;
}
