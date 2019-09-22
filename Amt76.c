#include<math.h>
#include<stdio.h>

int main() 
{
    float a,b,c,d,e,f;
    printf("please enter the value of a,b,c in the vector ai+bj+ck");
    scanf("%f%f%f",&a,&b,&c);
    int md;
    md=sqrt((a*a)+(b*b)+(d*d));
    d=a/md;
    e=b/md;
    f=c/md;
    
    printf("the unit vector is %fi%+fj%+fk",d,e,f);
    return 0;
}
