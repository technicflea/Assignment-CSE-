#include<stdio.h>
#include<math.h>

int main() {
    int i,a,b,n;
    int rsum=0,isum=0;
    scanf("%d",&n);
    printf("please enter the a,b value in complex no. a+ib ");
    for(i=1;i<=n;i++)
    {
        scanf("%d%d",&a,&b);
        rsum=rsum+a;
        isum=isum+b;
    }
    printf("the sum of complex nos is %d%+di",rsum,isum);
    return 0;
    
}
