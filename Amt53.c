#include<stdio.h>

int main() 
{
    int i,j;
    for(i=1;i<=4;i++)
    {
        for(j=1;j<=5;j++)
        {
            if(i%2!=0||i==1)
            printf("0*");
            else
            printf("*0");
        }
        printf("\n");
    }
    
}
