#include<stdio.h>

int main() 
{
    int i,n,x,sum=0,mul=1;
    printf("give n ");
    scanf("%d",&n);
    scanf("%d",&x);
    mul=x;
    for(i=1;i<n;i++)
    {
        scanf("%d",&x);
        sum=sum+(mul*x);
        mul=x;
    }
    printf("\n%d",sum);
} 
