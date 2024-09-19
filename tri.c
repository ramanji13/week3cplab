#include<stdio.h>
#include<math.h>
int main()
{
  int a,b,c;
  float s,A;
  printf("enter the value of a\n");
  scanf("%d",&a);
  printf("enter the value of b\n");
  scanf("%d",&b);
  printf("enter the value of c\n");
  scanf("%d",&c);
  s=(a+b+c)/2;
  printf("\nhe value of s is=%.2f\n",s);
  A=sqrt(s*(s-a)*(s-b)*(s-c));
  printf("\nhe value of area of triangle is=%.2f\n",A);
}
