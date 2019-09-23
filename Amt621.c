#include<stdio.h>
int main()
{
	int i,j;
	for(i=1;i<6;i++)
	{
	    
    	int p,s=1;
    	for(p=1;p<i;p++)
    	s=s+p;
    	for(j=1;j<=s;j++)
		printf("A");
		printf("\n");
	}
}
