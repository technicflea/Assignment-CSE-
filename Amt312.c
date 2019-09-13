/*program to find area of triangle made by chprd and radius*/
#include<stdio.h>
#include<math.h>
void main()
{
    int p,q ,r, a, b, c;
    printf("please enter the value of a.b.c in ax+by+c=0");
    scanf("%d%d%d",&a,&b,&c);
    printf("please enter the centre p, q and radius of r of circle");
    scanf ("%d%d%d",&p,&q,&r);
    float dist;
    dist=(a*p+b*q+c)/sqrt(pow(a,2)+pow(b,2));
    if (dist>r)
    {
        printf("no intersection");}
    else
        {
            float l;
            l=sqrt(pow(r,2)-pow(dist,2));
            l=2*l;
            printf("area of triangle =%f",0.5*l*dist);
        }
    
}
