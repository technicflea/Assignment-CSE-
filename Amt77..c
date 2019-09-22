#include<stdio.h>

int main() 
{
     int a,b,c,d;
    printf("please enter the value of a,b in complex no. a+ib");
    scanf("%d%d",&a,&b);
    printf("please enter the value of c,d in complex no. c+id");
    scanf("%d%d",&c,&d);
    printf("sum of complex no. is %d%+di",a+c,b+d);
    return 0;
}
