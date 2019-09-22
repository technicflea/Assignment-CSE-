
#include<stdio.h>

int main() {
    int i,sum=0,n,x;
    printf("enter n");
    scanf("%d",&n);
    printf(",");
    for(i=1;i<=n;i++)
    {
        scanf("%d",&x);
        sum=sum+x;
        printf(",");
    }
    printf("sum=%d",sum);
    
}
