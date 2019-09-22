//proper vector printing
#include<stdio.h>

int main() {
    int i,sum=0,n,x;
    printf("enter n");
    scanf("%d",&n);
    printf(";");
    for(i=1;i<=n;i++)
    {
        if(i>1)printf(",");
        scanf("%d",&x);
        sum=sum+x;
        
    }
    printf("sum=%d",sum);
    
}
