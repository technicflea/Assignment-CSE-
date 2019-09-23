#include<stdio.h>
void main()
{
    int x,y,i;
    for(i=0;i<10;i++)
    {
        if(i%2==0)
        {   for(x=0;x<20;x++)
            {
                printf("*");
            }
        printf("\n");
        }
        if(i==1 || i==3)
        {
            for(x=0;x<20;x++)
            {
                printf("0");
            }
        printf("\n");
        }
        if(i==5 || i==7 || i==9)
        {
            for(x=0;x<20;x++)
            {
                if(x<4 || x>13)
                {
                    printf("0");
                }
                else
                {
                    printf("*");
                }
            }
        printf("\n");
        }
    }
}
