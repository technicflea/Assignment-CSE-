#include<stdio.h>

int main() {
int a,b,flag=0;
printf("please enter the a,b of complecx no. a+ib");
scanf("%d%d",&a,&b);
if(a==0)printf("%di",b);
else if(b==0)printf("%d",a);
else if(a==0&&b==0)printf("0");
else printf("%d%+di",a,b);
return 0;
}
