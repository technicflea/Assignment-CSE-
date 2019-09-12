/*program, which reads a, b, c, p, q and r. Let ax + by + c = 0 and px + qy + r = 0
be the equations of lines. Print their point of intersection. */

#include<stdio.h>
#include<math.h>
int main() 
{
    int a,b,c,p,q,r;
    float m,n;
    printf ("please enter value of a,b,c in ax +by+c=0");
    scanf("%d%d%d",&a,&b,&c);
    printf("please enter calue of p,q,r in px+qy+r=0" );
    scanf("%d%d %d",&p,&q,&r);
    //using cross multiplication method
    m=(b*r-q*c)/(a*q-p*b);
    n=(c*p-r*a)/(a*q-p*b);
    printf("the point of intersection is(%f,%f)",m,n);
}
