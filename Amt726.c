#include<stdio.h>
#include<math.h>

int main() {
    int i,k,x,count=0;
    int p;
    scanf("%d%d",&p,&k);
    x=p;
    while(x!=0)
    {
        
        count++;
        x=x/10;
    }
    printf("%d",count);
    int l;
    l=count-k;
    i=(p/pow(10,l));
    i=i%10;
    printf("the %dth no. is %d",k,i);
    return 0;
    
}
