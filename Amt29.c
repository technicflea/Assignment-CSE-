/*find the area of the circle of intersection of plane and sphere*/
#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c,d,e,f,g,h;
    printf("please enter the value of a, b, c, d for eqn of plane in forn ax+by +cz+d=0");
    scanf("%d%d%d%d", &a,&b,&c,&d);
    printf("enter the value of e,f, g,h in x^2+y^2+z^2+ex+fy+gz+h=0");
    scanf("%d%d%d%d",&e,&f,&g,&h);
    float dist, rcir ,rsp=0, x1,y1,z1,area=0;
    x1=-e/2;
    y1=-f/2;
    z1=-g/2;
    printf("the center point of sphere are %f %f%f",x1,y1,z1);
    dist=(a*x1+b*y1+c*z1+d)/sqrt(pow(a,2)+pow(b,2)+pow(c,2));
    rsp=sqrt((pow(e,2)+pow(f,2)+pow(g,2))-h);
    rcir=sqrt(pow(rsp,2)-pow(dist,2));
    area=3.14*rcir*rcir;
    printf("area of intersection circle=%f",area);
    
}
