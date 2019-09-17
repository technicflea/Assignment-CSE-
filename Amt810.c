 #include<stdio.h>

int main() 
{
    int i,n,x,count=0;
    printf("give n ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d",&x);
        if(x%2!=0)
        count++;
        
    }
    printf("\n%d",count);
} 
