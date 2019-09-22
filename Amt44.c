#include<stdio.h>
int main()
{
	int i;
	printf("Even number bw 20 to 40 and odd no bw 50 to 80 ");
for(i=20; i<=80; i++)
{
	if(i>=20 && i<=40)
	{
		if ( i%2==0)
		{printf("%d\n", i) ;
	}
	}
if ( i>=50 && i<=80)
	{
		if ( i%2!=0)
		{
			printf("%d\n", i) ;
		}
	}
} }
