/*Even no not a multiple of 3 or 5 in a interval of 0-100*/
#include<stdio.h>
int main()
{
	int i;
	printf("even numbers not a multiple of 3 or 5 are");
for(i=0; i<=100; i++)
{ 
if (i%2==0)
{
	if(i%3==0 || i%5==0)
	{
	}
	else
printf("%d\n", i);
	}	
}
 
 
 }
