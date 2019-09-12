/*program to print distance between a point and line*/
#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c,d,e;
    float dist;
    printf("please enter the co-ordinates of the point as a,b");
    scanf("%d%d",&a,&b);
    printf("enter the c,d,e value for line eqn cx+dy+e=0");
    scanf("%d%d%d",&c,&d,&e);
    dist =(a*c+b*d+e)/pow(pow(c,2)+pow(d,2),0.5);
   printf("distance is=%f", dist) ;
}
