#include<stdio.h>

int main() {
    int j,i;
    for(i=1;i<=5;i++)
    {
        if(i%2!=0||i==1)
        {
            for (j=1;j<=10;j++)
            printf("**");
            
        }
        else
        for(j=1;j<=10;j++)
        printf("*0");
    printf("\n");
    }
}
