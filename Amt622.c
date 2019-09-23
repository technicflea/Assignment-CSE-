#include<stdio.h>
int main()
{
int i,j,k=65;

for(i=1;i<=5;i++)
   {
       	int l,s=1;
	for(l=1;l<i;l++)
	s=s+l;

   for(j=1;j<=s;j++)
       {
       printf("%c",k);
       k++;
       }   
   printf("\n");
   k=k-s+1;
   }
}

