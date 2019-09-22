/* To print even no less than 50 and odd no more than 50 in 0-100*/
#include<stdio.h>
int main()
{
	int i;
	printf("Even number bw 0 to 50 and odd numbers bw 50 to 100 :");
for(i=0; i<=100; i++)
{
	if ( i>=0&& i<=50)
	{
		if ( i%2==0)
		{
			printf("%d\n", i) ;
		}
	}
if ( i >=50 && i<=100)
{
	if ( i%2!= 0)
	{
		printf("%d\n", i) ;
	}
	}
	
}
}
