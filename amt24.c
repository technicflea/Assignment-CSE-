/*finding sloope of line*/
#include<stdio.h>

int main() 
{
    int a,b,c;
    float l,m,n;
    printf("please enter the a,b,c value in line eqn of the form ax+by+c=0");
    scanf("%d%d%d",&a,&b,&c);
    printf("the eqn of line is %dx%+dy%+d=0",a,b,c);
    l=a;
    m=b;
    n=c;
    
    float slope=-l/m;
    printf("the slope of line is %f",slope);
}
