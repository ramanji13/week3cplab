
#include <stdio.h>

int main() {
   int a,b,c,d,e,f,g;
   float h;
   
   printf("enter the value of a\n");
   scanf("%d",&a);
   printf("enter the value of b\n");
   scanf("%d",&b);
   printf("enter the value of c\n");
   scanf("%d",&c);
   printf("enter the value of d\n");
   scanf("%d",&d);
   printf("enter the value of e\n");
   scanf("%d",&e);
   printf("enter the value of f\n");
   scanf("%d",&f);
   printf("enter the value of g\n");
   scanf("%d",&g);
  h=(float) a+b*c+(d*e)+f*g;
   printf("\nthe value of h is %.2f\n",h);
     h=(float)a/b*c-b+a*d/3;
   printf("\nthe value of h is %.2f\n",h);
   
   h=(a++)+(++a);
 printf("\nthe value of h is %f\n",h);


  
 

    return 0;
}
