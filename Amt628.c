#include<stdio.h>
int main()
{
int i,j;
for(i=1;i<7;i++)
   {
   for(j=1;j<=i;j++)
   {	int k,s=0;
	    for(k=1;k<=j;k++)
	    s=s+k;
      printf("%d ",s);
   }
   printf("\n");
   }
}
