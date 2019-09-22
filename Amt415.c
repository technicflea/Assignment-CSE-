/* program which will print odd no bw 0-9, 20-29, 40-49.... 80-89 and even no bw 10-19, 30-39.... 90-99*/
#include<stdio.h>
int main()
{
	int i, j, k;
	for(i=0;i<=9; i++)
{
	for(j=0;j<=9;j++)
	{
	k= 10*i+j;
	if (i%2==0)
	{
	if (j%2!=0)
printf("%d\n",k);
	}
	else
	if (j%2==0)
	printf("%d\n",k);
}
}
