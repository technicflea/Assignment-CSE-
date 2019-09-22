#include<stdio.h>

int main() 
{
     int a,b,c,d,e,f;
    printf("please enter the value of a,b,c in the vector ai+bj+ck=0");
    scanf("%d%d%d",&a,&b,&c);
    printf("enter he value of d,e ,f in vector di+ej+fk=0");
    scanf("%d%d%d",&d,&e,&f);
    printf("the dot product is %d",(a*d)+(b*e)+(c*f));
    return 0;
}
