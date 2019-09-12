/*print chord formed on intersection of line and circle*/
#include<stdio.h>
#include<math.h>
void main()
{
    int h, k, r,s ;
    printf ("please enter thr coordinates of center");
    scanf("%d%d",&h,&k);
    printf("please enter the radius of circle and value  of x for eqn x=s");
    scanf("%d%d",&r,&s);
    float dist, p, chrd;
    dist=s-h;
    p=sqrt(pow(r,2)-pow(dist,2));
    chrd=2*p;
    printf("the length of chord is%f",chrd);
}
