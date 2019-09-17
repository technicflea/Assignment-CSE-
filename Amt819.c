#include<stdio.h>

int main() 
{
    int i,n,x,sum=0,k,count=0;
    printf("give n ");
    scanf("%d",&n);
    printf("enter k");
    scanf("%d",&k);
    for(i=1;i<=n;i++)
    {
        scanf("%d",&x);
        if(x%2==0)
        {
          count++;
        }
        if (count>k)
        {
        sum=sum+x;
        }
        
    }
    printf("\n%d",sum);
} 
