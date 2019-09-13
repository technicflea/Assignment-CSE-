/*program to write largerr digit first*/
#include<stdio.h>
void main()
{
    int a,b;
    printf("please enter two nos.");
    scanf("%d%d",&a,&b);
    if (a>b)
    {
        printf("%d,%d",a,b);
        
    }
    else
    {
        printf("%d,%d",b,a);
    }
}
