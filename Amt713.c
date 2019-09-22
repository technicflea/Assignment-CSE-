//proper vector printing
#include<stdio.h>

int main() {
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    if(a==0)printf("%dj%+dk",b,c);
    else if(b==0)printf("%di%+dk",a,c);
    else if(c==0)printf("%di%+dj",a,b);
    else if(a==0&&b==0&&c==0)printf("0");
    else if(a==0&&b==0)printf("%dk",c);
    else if(a==0&&c==0)printf("%dj",b);
    else if(c==0&&b==0)printf("%di",c);
    else printf("%di%+dj%+dk",a,b,c);
    
}
