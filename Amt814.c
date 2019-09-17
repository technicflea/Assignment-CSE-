 #include<stdio.h>

int main() 
{
    int i,n,x,sum=0;
    printf("give n ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d",&x);
        if((x%10)/10)>(x%10)
        {
        x=((x%100)/10)+((x%10)*10)+(x-(x%100));
        }
        sum=sum+x;
    }
    printf("\n%d",sum);
} 
