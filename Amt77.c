#include<stdio.h>

int main() 
{
     float a,b,c,d,e,f;
    printf("please enter the value of a,b,c in the vector ai+bj+ck=0");
    scanf("%f%f%f",&a,&b,&c);
    printf("enter he value of d,e ,f in vector di+ej+fk=0");
    scanf("%f%f%f",&d,&e,&f);
    printf("the cross product is %fi%+fj%+fk",(b*f)-(e*c),-((a*f)-(d*c)),(a*e)-(d*b));
    return 0;
}
