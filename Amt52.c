#include<stdio.h>

int main() 
{
    int i,j;
    for(i=1;i<=10;i++)
    {
        if(i<=3)
        {
            for(j=1;j<=10;j++)
            {
                if(j<=4)
                printf("00");
                else
                printf("**");
                
            }
            printf("\n");
        }
        if(i>3&&i<=7)
        {
            for(j=1;j<10;j++)
            printf("**");
            printf("\n");
        }
        if(i>7)
        {
            for (j=1;j<=4;j++)
            {
                if(j<=3)
                printf("*****");
                else
                printf("00000");
                
            }
            printf("\n");
        }
    }
}
