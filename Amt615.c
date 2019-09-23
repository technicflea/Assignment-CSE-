#include<stdio.h>
int main()
{
int i,j,t=65;
for(i=1;i<=6;i++)
   {
   for(j=1;j<=i;j++)
       {
       printf("%c",t);
       c++;
       }   
   printf("\n");
   t=t-i+1;
   }
}
