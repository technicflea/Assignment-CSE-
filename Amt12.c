/* program takes input of two nos. and print a^2+b^3 */
#include<stdio.h>
#include<math.h>
void main()
 { 
    float a,b,sum=0;
    printf("please enter a and b respectively");
    scanf("%f%f",&a,&b);
    sum=pow(a,2)+pow(b,3);
    printf("sum in form of a^2+b^3 is=%f",sum);
 }
