//find sum of 1st 2nd 4th 7th ... nos.
#include<stdio.h>

int main() 
{
    int i,n,x,k=0,l=1;
    printf ("please enter the value of n ");
    scanf("%d",&n);
    printf("enter x\n");
    int sum=0;
    for(i=1;i<=n;i++)
    {
        scanf("%d",&x);
        if (i==(l+k))
        {
            sum=sum+x;
            k++;
            l=i;
        }
    }
    printf("the sum is %d",sum);
    return 0;
}
