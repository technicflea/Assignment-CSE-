#include<stdio.h>

int main() 
{
    float a,b,c,d;
    printf("please enter the decimal values of a, b, c,d\n");
    scanf("%f%f%f%f",&a,&b,&c,&d);
    printf("%0.3f\t\t%0.3f\n%0.5f\t%0.1f",a,b,c,d);
    return 0;
}
