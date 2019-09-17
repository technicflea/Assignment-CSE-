#include<stdio.h>

int main() 
{
    int i,n,x,sum=0,flag=0;
    printf("give n ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d",&x);
        if(x%2==0)
        {
            int k=0;
            k++;
        }
        if(k>1)
        {
        sum=sum+x;
        }
    }
    printf("\n%d",sum);
}
