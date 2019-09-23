#include<stdio.h>

int main() {
 int i,a,b;
 scanf("%d%d",&a,&b);
 for (i=1;i<=6;i++)
 {
     printf("(%d)(%d)",a,b);
     if(i>1)printf("(%d)",a+b);
     if(i>2)printf("(%d)",a+(2*b));
     if(i>3)printf("(%d)",2*a+3*b);
     if(i>4)printf("(%d)",3*a+5*b);
     if(i>5)printf("(%d)",5*a+8*b);
     printf("\n");
 }
 return 0;
}
 
