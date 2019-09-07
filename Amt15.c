/* program to delete last two digits of input no.*/


#include<stdio.h>
void main()
  {
  int n;
  printf("please enter the no. of which you want to delete last 2 digits");
  scanf("%d",&n);
  if(n/100==0)
    {printf("no. has less than 3 digits, no digit left after deletion");
    }
  else
   { n=n/100;}
  printf("the no. after deletion of last 2 digits is %d",n);
  }
