 
/* program to print no bw 10-19 l, 30-39, 50-59, 70-79, 90-99*/
#include<stdio.h>
int main()
{
      int i;
      for(i=10;i<=100; i++)
    {
      if((i/10)%2!=0)
      printf("%d\n",i);
    }
}
