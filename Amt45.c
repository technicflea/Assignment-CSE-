/*program to print multiple of 3 or 7 in finite interval*/
#include<stdio.h>
int main()
{
	int i;
	printf("Multiples of 3 or 7 ");
for(i=0; i<=70; i++)
{
		if ( i%3==0 || i%7==0)
		{printf("%d\n", i) ;
	}
}
}
