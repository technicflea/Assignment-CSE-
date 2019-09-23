#include<stdio.h>
main()
{
int i,j,k;
char c='A';
for(i=1;i<=5;i++)
   {
   c='A';
   for(k=5-i;k>=0;k--)
       printf(" ");
   for(j=i;j>=1;j--)
       {printf("%c",c);
       c++;}
   c=c-2;
   for(j=2;j<=i;j++)
       {
       printf("%c",c);
       c--;
       }
   printf("\n");
   }

}
