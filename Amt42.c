/*Print all number bw 20 & 40 and even number bw 50 & 80*/
#include<stdio.h>
int main()
{
	int i;
	printf("Natural number bw 20 and 40 and Even number bw 50 and 80");
for(i=20; i<=80; i++)
{
	if(i>=20 && i<=40)
	{
		printf("%d\n", i) ;
	}
if ( i>=50 && i<=80)
	{
		if ( i%2==0)
		{
			printf("%d\n", i) ;
		}
	}
}
}
