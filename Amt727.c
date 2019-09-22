#include<stdio.h>
#include<math.h>

int main() {
    int i,t,x,p;
    scanf("%d",&x);
    while(x!=0)
    {
        t=x%10;
        if(t%2==0&&x%10!=0)p=t;
        x=x/10;
    }
    printf("the 1st even no. is %d",p);
    return 0;
    
}
