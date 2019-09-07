/*program to print the sum of last two digits*/
#include<stdio.h>
void main()
  {
  int n;
  printf("please enter the no. of which you want to add last  two digits");
  if(n/10==0)
    {printf("no. has less than two digits");
    }
  else
    n=n%100;
    n=(n%10)+(n/10);
  printf("the sum of last two digits is %d",n);
  }
