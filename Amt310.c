/*no. of nos equal to x*/
#include<stdio.h>
void main()
{int a,b,c,d,x,count=0;
printf("please enter the value of a,b,c,d,x");
scanf("%d%d%d%d",&a,&b,&c,&d);
printf("enter the value of c");
scanf("%d",&x);
if (x==a)
count++;
if(x==b)
count++;
if (x==c)
count++;
if(x==d)
count++;
printf("the nos equal to x are %d",count);
}
