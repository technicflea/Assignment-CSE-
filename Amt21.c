/* this program calculated the area of triangle inputs are sides*/
#include<stdio.h>
#include<math.h>
int main()
  {
  int a,b,c;
  float s, area=0;
  printf(" please enter the sides a,b,c of triangle");
  scanf("%d%d%d", &a,&b,&c);
  s=(a+b+c)/2;
  area=sqrt(s*(s-a)*(s-b)*(s-c));
  printf("area of triangle=%f",area);
  }

