//proper vector printing
#include<stdio.h>
#include<math.h>

int main() 
{
    int i,n,a,m,j;
    int sum2=0,sum=0;
    printf("enter  n and m\n");
    scanf("%d%d",&n,&m);
    for(i=1;i<=n;i++)
    {
    for(j=1;j<m;j++)    
        {
            scanf("%d",&a);
            
            sum=sum+a;
            printf(",");
        }
    sum2=sum2+sum;    
    }
    
    printf("sum=%d",sum2);
    
}
