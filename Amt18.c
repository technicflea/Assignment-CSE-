/* program to double the last digit of no.*/
#include<stdio.h>
void main()
  {
  int n;
  printf("please enter the no. of which you want to double the last digit");
  starts:
  printf("please keep the last digit less than 5");
  scanf("%d",&n);
    if(n%10>=5)
      { goto starts;
      }
    else
      {n=n+(n%10);}
  printf("the modified no. is %d",n);
  }
