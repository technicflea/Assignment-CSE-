#include<stdio.h>
int main()
{
	int i,j=20,k;
	for(i=1;i<=6;i++)
	{
		for(k=1;k<=i;k++)
		printf("%c",++j+64);
		j=j-i*2-1;
		printf("\n");
	}
}
