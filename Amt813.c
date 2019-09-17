 #include<stdio.h>

int main() 
{
    int i,n,x,sum=0,count=0;
    printf("give n ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d",&x);
        if(x%2!=0)
        {
        sum=sum+x;
        count++;
        }
        
    }
    int avg;
    avg=sum/count;
    printf("\n%d",avg);
} 
