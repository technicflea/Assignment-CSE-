/" program to find the distance between two input points*/
 #include<stdio.h>
  #include<math.h>
  int main()
  {
  float a,b,c,d, dist;
  printf("please enter the coordinates of points between which u want to find distance\n point1(a,b)=");
  scanf("%f%f",&a,&b);
  printf(" point2(c,d)=");
  scanf("%f%f",&c,&d);
  dist=sqrt(pow(a-c,2)+pow(b-d,2));
  printf("the distance=%f", dist);
  }
