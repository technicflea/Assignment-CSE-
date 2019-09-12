/*to print distinct no.*/
#include<stdio.h>
void main()
{
    int a,b,c;
    printf("please enter three nos. 2 of which are same and one is different");
    scanf("%d%d%d",&a,&b,&c);
    if (a==b)
    {
        printf("%d id diff",c);
    }
    else
    {
        if (a==c)
        printf("%d is diff",b);
        else
        printf("%d id different",a);
    }
}
