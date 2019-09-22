//proper vector printing
#include<stdio.h>
#include<math.h>

int main() {
    int i,n,a,b;
    int sum=0,mul;
    printf("enter  n\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
    
        scanf("%d%d",&a,&b);
        mul=a*b;
        sum=sum+mul;
        
    }
    
    printf("sum=%d",sum);
    
}
