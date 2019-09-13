/*program to find 90 deg angle in tri*/
#include<stdio.h>
#include<math.h>
void main()
{
    int a,b,c,m=0;
    printf("please enter the 3 sides of triangle");
    scanf("%d%d%d",&a,&b,&c);
    a>b?(a>c?(m=a)&&(a=b)&&(b=c):(m=c)):(b>c?(m=b)&&(b=a)&&(a=c):(m=c));
    if(pow(m,2)==pow(a,2)+pow(b,2))
    printf("the angle is 90degree");
    else
    printf("no angle is 90 deg");
}
