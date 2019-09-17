 #include<stdio.h>

int main() 
{
    int i,n,x,sum=0;
    printf("give n ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d",&x);
        if(x<90&&x>30)
        sum=sum+x;
        
    }
    printf("\n%d",sum);
} 
