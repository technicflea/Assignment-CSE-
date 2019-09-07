/*program to  delete last digit of a no.*/
#include<stdio.h>
void main()
  {
  int n;
  printf("please enter the no. of which you want to delete last digit");
  scanf("%d",&n);
  if(n/10==0)
    {printf("no. is single digit, no digit left after deletion");
    }
  else
    {n=n/10;}
  printf("the no. after deletion of last digit is %d",n);
  }
