/*printing centre and radius of circle*/
#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c;
    float radi;
    printf("please enter the a,b,c value of eqn of circle x^2+y^2+ax+by+c=0");
    scanf("%d%d%d",&a,&b,&c);
    printf("the eqn of circle is x^2+y^2%+dx%+dy%+d",a,b,c);
    printf("the coordinates of center are (%d,%d)",-a/2,-b/2);
    radi=sqrt(pow(a/2,2)+pow(b/2,2)-c);
    printf("the radius of circle is %f ",radi);
}
