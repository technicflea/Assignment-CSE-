/* find the roots of quadratic eqn*/
#include<stdio.h>
#include<math.h>
int main()
{
    float a,b,c;
    float x1,x2,d,d1;
    printf("please enter the value of a,b,c in  ax^2+bx+c=0");
    scanf("%f%f%f",&a,&b,&c);
    d=sqrt(pow(b,2)-4*a*c);
    if(d>0)
    {
        printf("the roots are real ");
        x1=(-b+d)/(2*a);
        x2=(-b-d)/(2*a);
        printf(" the roots are %0.2f %0.2f",x1,x2);
        
    }
    else if(d==0)
    {
        printf("roots are equal %0.2f %0.2f",-b/(2*a),-b/(2*a));
    }
    else 
    {
        printf("the roots are imaginary");
        d1=sqrt(4*a*c-pow(b,2));
        printf("the roots are %0.2f+%0.2fi",-b/(2*a),d1/(2*a));
        printf("the roots are %0.2f-%0.2fi",-b/(2*a),d1/(2*a));
    }
}
