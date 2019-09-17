#include<stdio.h>

int main()
{
    int i,j,k,f,n=5,d=1,h=13;
    for(i=1;i<=9;i++)
    {
        if(i<=3)
        {
            for(j=1;j<=20;j++)
            printf("*");
        }
        else
        {
            for(k=1;k<=n;k++)
            printf("*");
            n--;
            for(f=1;f<=d;f++)
            printf("00");
            d+=2;
            
            for(j=1;j<=h;j++)
            printf("*");
            h--;
        }
       printf("\n") ;
    }
}
