#include<stdio.h>
int main()
{
	int i,j;
	for(i=1;i<=6;i++)
	{
		for(j=1;j<=i;j++)
		{
		if(i==6)break;
		printf("%c",j+96);
		}
		for(j=i+1;j<=6;j++)
		printf("%c",j+64);
		printf("\n");
	}
}
