/*the largest of three nos.*/
#include<stdio.h>
void main()
{
    int a,b,c;
    printf("please enter the 3 nos. a,b,c");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b)
    {
        if(a>c)
        printf("a is largest");
        else 
        printf("c is largest");
        
    }
    else
    {
        if(b>c)
        printf("b is largest");
        else 
        printf("c is largest");
        
    }
}
