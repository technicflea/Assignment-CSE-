/*Print all no which are multiple of 3 or 5 but not of both*/
#include<stdio.h>
int main()
{
	int i;
for(i=0; i<=100; i++)
{ 
if (i%3==0 || i%5==0)
{
	if(i%3==0 && i%5==0)
	{
	}
	else
printf("%d\n", i);
	}	
}
 
 
 }
