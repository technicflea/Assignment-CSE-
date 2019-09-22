/*to print no whose sum of both digit is 7*/
#include<stdio.h>
int main()
{
  int i,j,k;
  for(i=0;i<=9; i++)
  {
    for(j=0; j<=9; j++)
      {
      k=i*10+j;
      if (i+j==7)
      {
        printf("%d\n",k);
      }
  }
}
}
