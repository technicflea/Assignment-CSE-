
/*program to delete 2nd last digit*/
#include<stdio.h>
void main()
  {
  int n;
  printf("please enter the no. of which you want to delete 2nd last digit");
  scanf("%d",n);
  if(n/10==0)
    {printf("no. has only one digit")
     }
  else
    {n=(n/100)*10+(n%10);
     }
  printf("the no. after deleting 2nd last digit=%d",n)
  }
