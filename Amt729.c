#include<stdio.h>
#include<math.h>

int main() {
    int i,a,b,n;
    int rsum=0,isum;
    scanf("%d",&n);
    printf("please enter the nos. ");
    for(i=1;i<=n;i++)
    {
        scanf("%d%d",&a,&b);
        isum=pow(a,b);
        rsum=rsum+isum;
    }
    printf("the sum of nos is %d",rsum);
    return 0;
    
}
