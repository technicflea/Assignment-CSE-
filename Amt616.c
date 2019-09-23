#include<stdio.h>
int main()
{
int i,j,l;
for(i=1;i<=6;i++)
   {
   l=65;
   for(j=1;j<=6-i;j++)
       {
       printf("%c",l);
       l=l+i;
       }   
   printf("\n");
   }
}
