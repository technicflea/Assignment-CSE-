 #include<stdio.h>

int main() 
{
    int i,n,x,ival=0;
    printf("give n ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d",&x);
        if(x%2==0)
        {
        ival=x;
        }
        
    }
    printf("\n%d",ival);
} 
