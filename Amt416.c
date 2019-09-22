/* program to print even no bw 10-19, 40-59 and 70-89*/
#include<stdio.h>
int main()
{
	int i, j, k;
	for(i=0;i<=9; i++)
{
	for(j=0;j<=9;j++)
	{
	k= 10*i+j;
	if (i%3!=0)
	{
		if ( j%2==0)
		{
printf("%d\n",k);
		}
}
}
}
}
