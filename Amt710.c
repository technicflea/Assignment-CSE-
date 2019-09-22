#include<stdio.h>

int main() {
int a,b,c;
printf("please enter the value of a,b,c in line eqn ax +by+c=0");
scanf("%d%d%d",&a,&b,&c);
printf("the line eqn is %dx%+dy%+d=0",a,b,c);
printf("the point where it cuts x-axis is(%d,0)",c/a);
return 0;
}
