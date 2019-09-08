 #include<stdio.h>
 #include<math.h>
  int main()
  {
  float a,b,c,d, l,m,n;
  printf("please enter the coordinates of vertices of triangle \n point1(a,b)=");
  scanf("%f%f",&a,&b);
  printf(" point2(c,d)=");
  scanf("%f%f",&c,&d);
  printf("point3(e,f)=");
  scanf("%f%f",&e,&f);
  l=sqrt(pow(a-c,2)-pow(b-d,2));
    m=sqrt(pow(a-e,2)-pow(b-f,2));
    n=sqrt(pow(e-c,2)-pow(f-d,2))
  printf("the distance=%f", dist);
  }
