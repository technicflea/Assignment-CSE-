#include<stdio.h>

int main() 
{
    printf("please enter two complex nos");
    int a,b,c,d;
    printf("input a,b in a+ib");
    scanf("%d%d",&a,&b);
    printf("input c,d in c+id");
    scanf("%d%d",&c,&d);
    printf("the multiplication of given two complex nos is %d%+di",(a*c-b*d),(a*d)+(b*c));
    printf("the division of given two complex nos is %d%+di",(a*c+b*d)/(c*c+d*d),(b*c-a*d)/(c*c+d*d));
}
