#include<stdio.h>
void main()
{
    int x,y,m=7;
    for(x=0;x<2;x++)
    {
        for(y=0;y<20;y++)
        {
            printf("*");
        }
    printf("\n");
    }

    for(x=0;x<8;x++)
    {
        for(y=0;y<20;y++)
        {
            if(x+y<6 || (y>m && x<8))
            {
                printf("*");
            }
            else
            {
                printf("0");
            }
        }
    m+=2;
    printf("\n");
    }
}
