/*this program find the value of function f(x)=ax^2+bx+c at x=p*/

#include<stdio.h>
#include<math.h>
void main()
{
int a,b,c,p,f;
printf("please enter values of a,b,c,p");
scanf("%d%d%d%d",&a,&b,&c,&p);
f=a*pow(p,2)+ (b*p)+c;
printf("value of f(x)=ax^2+bx+c at x=p is %d",f);
}
