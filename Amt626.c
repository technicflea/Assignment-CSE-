#include<stdio.h>

int main() {
 int i,a,j;
 
 for (i=4;i<=10;i++)
 {
     for(j=0;j<=30;j=j+i)
     {
         printf("%d,",j);
     }
     printf("\n");
 }
 return 0;
}
 
