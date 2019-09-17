#include<stdio.h>

int main() 
{
    int i,j,k;
    for(i=1;i<=5;i++)
    {
        for(j=0;j<20;j++)
        {
            if(i%2!=0||i==1)
            {
            printf("*");
            }
            else 
            {
                if(j%5==0)
                printf("*");
                else
                printf("0");
            }
        }
      printf("\n");
    }
}
