/*program to print no having last digit bw 5 to 8*/
include<stdio.h>
int main()
{
	int i;
for(i=0; i<=100; i++)
{ 
	if ( i%10==5 || i%10==6 || i%10==7 || i%10==8)
{printf("%d\n", i);
	}	
}
 
}
 
