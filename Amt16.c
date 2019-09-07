
#include<stdio.h>
void main()
  {
  int n;
  printf("please enter the no. of which you want to print second last digit");
  scanf("%d",&n);
  if(n/10==0)
    {printf("no. has less than 2 digit");
    }
  else
    n=n%100;
    n=n/10;
  printf("the second last digit  is %d",n);
  }
