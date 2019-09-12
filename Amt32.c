#include<stdio.h>
void main()
{
    int a,b,c,d,maxm;
    scanf ("%d%d%d%d",&a,&b,&c,&d);
    if (a>b)
    {maxm=a;}
    else
    maxm =b;
    if(c>d)
    {if(c>maxm)
    printf("c is greatest");
    else
    printf("maximum=%d",maxm);
    }
    else
    {
        if (d>maxm)
        printf("d is maxm");
        else
        printf("maximum =%d",maxm);
        
    }
}
