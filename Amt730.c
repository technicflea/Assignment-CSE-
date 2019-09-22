#include<stdio.h>
#include<math.h>

int main() {
    float a;
    scanf("%f",&a);
    int n;
    n=a;
    a=a-n;
    n=n+17;
    int k;
    k=a*1000;
    printf("the modified no. is %d.%d",n,k);
    return 0;
    
}
