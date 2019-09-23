#include<stdio.h>
int main()
{
int i,j;
char c,m;
for(i=1;i<=6;i++)
   {
   c='A';
   m='a';
   for(j=1;j<=i;j++)
       printf("%c",c++);
   for(j=0;j<=5-i;j++)
       printf("%c",m++);
   printf("\n");
   }
}
