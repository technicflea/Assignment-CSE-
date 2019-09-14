/*to find the slope of line and find if its vertical or not*/
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
void main()
{
    float a,b,c;
    printf ("please enter the value of a,b,c in line eqn ax+by+c=0");
    scanf("%f%f%f",&a,&b,&c);
    float slope;
    slope=-a/b;
    printf("the slope of line is %f",slope);
    if(b==0)
    printf("line is vertical");
    else 
    printf("line is not vertical");
}
