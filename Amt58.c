#include<stdio.h>

int main() 
{
    int i,j,k,p,n,f,t;
    p=6;
    n=4;
    for(i=1;i<=10;i++)
    {
        if(i<=8)
        {
            for(j=1;j<=p;j++)
            printf("0");
            if(p>0)
            p--;
        
            for(k=1;k<=n;k++)
            printf("*");
            n++;
            for(f=1;f<=9;f++)
            printf("0");
        }
        else
        {
            for (t=1;t<=2*n;t++)
            printf("*");
        }
    printf("\n");
    }
}
