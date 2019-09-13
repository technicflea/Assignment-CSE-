/*Write a program, which reads an integer k also and finds sum of all numbers after k even  numbers*/
#include<stdio.h>
int main()
{
    printf("please enter the value of nos you want to enterand value of k");
    int n,j,i,k,z=0,s=0;
    scanf("%d%d",&n,&k);
    for (i=1;i<=n;i++)
    {
        scanf("%d",&j);
        if(j%2==0)
        z++;
        if(z>k)
        {
            s=s+j;
        }
    }
    printf("the sum is=%d",s);
}
