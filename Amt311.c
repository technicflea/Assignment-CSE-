/*no. of nos equal to x*/
#include<stdio.h>
void main()
{int a,b,c;
printf("please enter three distinct no. a,b,c");
scanf("%d%d%d",&a,&b,&c);
if ((a<b&&b<c)||(b<a&&b>c))
printf ("middle=%d",b);
if((a<b&&a>c)||(a>b&&a<c))
printf("middle=%d",a);
else
printf("middle=%d",c);
}
