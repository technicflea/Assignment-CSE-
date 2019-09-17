#include<stdio.h>

int main() 

{

    int i,n,x,l=0,sum=0,flag=0;

    printf("give n ");

    scanf("%d",&n);

    for(i=1;i<=n;i++)

    {

        scanf("%d",&x);

        if(x%2==0)

        {if((i-l)==1)
            {flag=1;}
          l=i;
        }



        if(flag==1)

        {

        sum=sum+x;

        }

    }

    printf("\n%d",sum);

}
