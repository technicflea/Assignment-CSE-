//proper vector printing
#include<stdio.h>
#include<math.h>

int main() {
    int i,n;
    float sum=0,x;
    printf("enter the no. of dimensions n\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
    
        scanf("%f",&x);
        sum=sum+pow(x,2);
        
    }
    sum=sqrt(sum);
    printf("magnitude=%f",sum);
    
}
