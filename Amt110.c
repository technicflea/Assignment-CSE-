/* program to exchange the last 2 digits of a no.*/
#include<stdio.h>

int main() 
{
    int n; 
    printf("please enter the no. of which you want to exchange last two digits");
    scanf("%d",&n);
    if(n/10==0)
    { printf("the no. is single digit");
    }
    else
    n=(n-(n%100))+((n%100)/10)+ ((n%10)*10);
    printf("modified no. =%d",n);
    
    
    
    
}
