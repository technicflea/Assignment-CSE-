/* to print no whose 2st digit when divided by 3 leaves rem 1*/
#include<stdio.h>
int main()
{
	int i, j, k;
	for(i=1;i<=9; i++)
{
	for(j=0;j<=9;j++)
	{
	k= 10*i+j;
	if (i%3==1)	
printf("%d\n",k);
}
}
}
